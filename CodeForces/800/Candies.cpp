#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    if (n%2==0)
    {
        cout << -1 << endl;
    }

    vector<int> v;
    int f = 0;
    for (int i = 29; i >= 1; i--) {
        if ((n >> i) & 1) {
            f = 1;
            v.push_back(i);
        } else if (f) {
            v.push_back(i);
        }
    }
    cout << v.size() << endl;
    for (auto x : v) cout << x << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}