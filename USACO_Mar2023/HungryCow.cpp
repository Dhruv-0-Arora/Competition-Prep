#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;

    long long storage = 0;
    vector<pairs<int, int>> cows;
    for (pair<int, int> &x : cows) {
        cin >> x;
        storage += x;
    }

    if (storage < t) {
        cout << storage << endl;
        return;
    } else if (storage >= t) {
        cout << t << endl;
        return;
    }
}

int main ()
{
    solve();
}