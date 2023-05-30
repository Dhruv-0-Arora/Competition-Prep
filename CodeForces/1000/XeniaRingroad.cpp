#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int current = 1;
    long long ans = 0;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if (a >= current) {
            ans += a - current;
        } else {
            ans += n - current + a;
        }
        current = a;
    }

    cout << ans << endl;

    return 0;
}