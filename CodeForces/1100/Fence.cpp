#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;

    int h[n]; for (int i = 0; i < n; i++) cin >> h[i];

    int sum[n-k+1]; int minNum = 1e9; int minIndex = 0;
    for (int i = k-1; i < n; i++) {
        for (int j = i; j > i-k+1; j--) {
            sum[i] += h[j];
        }

        if (sum[i] < minNum) {
            minNum = sum[i];
            minIndex = i - k + 2;
        }
    }

    cout << minIndex << endl;

    // print out array sum
    // for (int i = 0; i < n-k+1; i++) {
    //     cout << sum[i] << " ";
    // }

}

/*
Polycarpus has bought a posh piano and is thinking about how to get it into the house. In order to carry out his plan, he needs to take exactly k consecutive planks from the fence. Higher planks are harder to tear off the fence, so Polycarpus wants to find such k consecutive planks that the sum of their heights is minimal possible.

Write the program that finds the indexes of k consecutive planks with minimal total height. Pay attention, the fence is not around Polycarpus's home, it is in front of home (in other words, the fence isn't cyclic).

Input
The first line of the input contains integers n and k (1 ≤ n ≤ 1.5·105, 1 ≤ k ≤ n) — the number of planks in the fence and the width of the hole for the piano. The second line contains the sequence of integers h1, h2, ..., hn (1 ≤ hi ≤ 100), where hi is the height of the i-th plank of the fence.

Output
Print such integer j that the sum of the heights of planks j, j + 1, ..., j + k - 1 is the minimum possible. If there are multiple such j's, print any of them.
*/