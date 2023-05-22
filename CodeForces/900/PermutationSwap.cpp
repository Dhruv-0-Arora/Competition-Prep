/*
Permutation Swap

You are given an unsorted permutation 𝑝1,𝑝2,…,𝑝𝑛
. To sort the permutation, you choose a constant 𝑘
 (𝑘≥1
) and do some operations on the permutation. In one operation, you can choose two integers 𝑖
, 𝑗
 (1≤𝑗<𝑖≤𝑛
) such that 𝑖−𝑗=𝑘
, then swap 𝑝𝑖
 and 𝑝𝑗
.

What is the maximum value of 𝑘
 that you can choose to sort the given permutation?

A permutation is an array consisting of 𝑛
 distinct integers from 1
 to 𝑛
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array) and [1,3,4]
 is also not a permutation (𝑛=3
 but there is 4
 in the array).

An unsorted permutation 𝑝
 is a permutation such that there is at least one position 𝑖
 that satisfies 𝑝𝑖≠𝑖
.

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡
 (1≤𝑡≤104
). The description of the test cases follows.

The first line of each test case contains a single integer 𝑛
 (2≤𝑛≤105
) — the length of the permutation 𝑝
.

The second line of each test case contains 𝑛
 distinct integers 𝑝1,𝑝2,…,𝑝𝑛
 (1≤𝑝𝑖≤𝑛
) — the permutation 𝑝
. It is guaranteed that the given numbers form a permutation of length 𝑛
 and the given permutation is unsorted.

It is guaranteed that the sum of 𝑛
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum value of 𝑘
 that you can choose to sort the given permutation.

We can show that an answer always exists.
*/









// #include <fstream>
// #include <iostream>
// #include <math.h>

// using namespace std;

// // reading file input and output
// ifstream fin("PermutationSwap.in");

// // function to find the max value of k
// int findK(int n, int p[])
// {
//     int k = 0;

//     // finding the max value of k
//     for (int i = 0; i < n - 1; i++)
//     {
//         k = max(k, i + 1 - p[i]);
//     }

//     return k;
// }

// int main()
// {

//     // value t is the number of test cases with max value of 10^4
//     int t;
//     fin >> t;

//     // n will be the length of the permutation max value of 10^5
//     int n;

//     for (int i = 0; i < t; i++)
//     {
//         fin >> n;

//         // k will be the max value of k
//         int k = 0;

//         // reading each permutation value
//         int p[n];
//         for (int j = 0; j < n; j++)
//         { fin >> p[j]; }

//         // finding the max value of k
//         cout << findK(n, p) << endl;
//     }
// }



#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i]--;
    }

    vector<int> ds;

    for (int i = 0; i < n; i++)
    {
        int d = abs(v[i] - i);
        if (d == 0)
        {
            continue;
        }
        ds.push_back(d);
    }

    int ans = 1;
    ans = ds[0];

    for (auto x : ds)
    {
        ans = __gcd(ans, x);
    }

    cout << ans << endl;
}