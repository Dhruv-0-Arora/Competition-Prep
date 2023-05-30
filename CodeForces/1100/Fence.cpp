#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n, k, x, ans = 0;
    cin >> n >> k;
    long long ara[n], sum[n];
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
        if (i == 0) sum[0] = ara[0];
        else sum[i] = sum[i-1] + ara[i];
    }

    long long mn = (long long) 1e+16;
    for (int i = 0; i < n - k + 1; i++) {
        if (i == 0) x = sum[i + k - 1];
        else x = sum[i + k - 1] - sum[i - 1];
        if (x < 0) x *= -1;
        if (x < mn) {
            mn = x;
            ans = (long long) i;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}


/*
Polycarpus has bought a posh piano and is thinking about how to get it into the house. In order to carry out his plan, he needs to take exactly k consecutive planks from the fence. Higher planks are harder to tear off the fence, so Polycarpus wants to find such k consecutive planks that the sum of their heights is minimal possible.

Write the program that finds the indexes of k consecutive planks with minimal total height. Pay attention, the fence is not around Polycarpus's home, it is in front of home (in other words, the fence isn't cyclic).

Input
The first line of the input contains integers n and k (1 ≤ n ≤ 1.5·105, 1 ≤ k ≤ n) — the number of planks in the fence and the width of the hole for the piano. The second line contains the sequence of integers h1, h2, ..., hn (1 ≤ hi ≤ 100), where hi is the height of the i-th plank of the fence.

Output
Print such integer j that the sum of the heights of planks j, j + 1, ..., j + k - 1 is the minimum possible. If there are multiple such j's, print any of them.
*/