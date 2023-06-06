#include <bits/stdc++.h>   
using namespace std;

void solve()
{
    int n, t; cin >> n >> t;
    int a[n], b[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int bst = -1; // best index

    for (int i = 0; i < n; i++)
    {
        if (i + a[i] <= t && (bst == -1 || b[i] > b[bst]))
        {
            bst = i;
        }
    }
    if (bst == -1) cout << -1 << endl;
    else cout << bst + 1 << endl;
}

int main()
{
    int q; cin >> q;
    while (q--) solve();
}

// // finding the excitement from b
// void findExcitement(vector<pair<int, int>>& a, vector<int>& b, int t, int n)
// {
//     int largestIndex = 0;
//     for (int i = 1; i < n; i++)
//     {
//         cout << a[i].second << endl;
//         if (a[i].second <= t)
//         {
//             int index = a[i].first;

//             if (b[largestIndex] < b[index])
//             {
//                 largestIndex = index;
//             }
//         } else break;
//     }

//     cout << largestIndex + 1 << endl;
// }

// bool cmp(const pair<int, int>& a, const pair<int, int>& b)
// {
//     return a.second < b.second;
// }

// void solve()
// {
//     int n, t; cin >> n >> t;
//     vector<pair<int, int>> a;
//     vector<int> b;
//     for (int i = 0; i < n; i++)
//     {
//         int x; cin >> x;
//         a.push_back({i, x + i});
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int x; cin >> x;
//         b.push_back(x);
//     }

//     sort(a.begin(), a.end(), cmp);

//     if (a[0].second > t)
//     {
//         cout << -1 << endl;
//         return;
//     } else if (a[0].second <= t && a[1].second <= t)
//     {
//         findExcitement(a, b, t, n);
//     } else
//     {
//         cout << "here " << a[0].second << " " << a[1].second << endl;
//         cout << a[0].first + 1 << endl;
//     }

// }

// int main()
// {
//     int q; cin >> q;
//     while (q--) solve();
// }