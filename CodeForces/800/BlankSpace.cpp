#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    
    int ans = 0; int current = 1; int streak;
    
    for (int i = 0; i < n; i++) {
        int a; cin >> a;

        if (current == 0 && a == 0)
        {
            streak++;
            ans = max(ans, streak);
        } else if (a == 0) {
            current = 0;
            streak = 1;
            ans = max(ans, streak);
        } else {
            current = 1;
            streak = 0;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
}