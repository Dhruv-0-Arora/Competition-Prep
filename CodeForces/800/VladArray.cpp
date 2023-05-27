#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    int altT = t;

    string ans[t];

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);

        string ans = "YES";

        if (arr[0] % 2 == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                ans = "NO";
            }
        }

        cout << ans << endl;
    }

    return 0;

}