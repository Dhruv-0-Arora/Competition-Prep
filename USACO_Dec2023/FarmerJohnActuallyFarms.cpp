#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<pair<int, pair<ll,ll>>>& plants, int n) {
    for (int i = 1; i < n; i++) {
        if (plants[i-1].second.first <= plants[i].second.first)
            return false;
    }

    return true;
}

void solve() {
    int n; cin >> n;

    vector<pair<int, pair<ll,ll>>> plants(n);
    for (pair<int, pair<ll, ll>>& p : plants) { // getting the heights
        cin >> p.second.first;
    }
    for (pair<int, pair<ll, ll>>& p : plants) { // getting the growthrates
        cin >> p.second.second;
    }
    for (pair<int, pair<ll, ll>>& p : plants) { // getting the order it should be in
        cin >> p.first;
    }

    if (n == 1) { // corner case
        if (plants[0].first == 0)
            cout << 0 << endl;
        else 
            cout << -1 << endl;
        return;
    }

    sort(plants.begin(), plants.end());

    for (int i = 1; i < n; i++) {
        if (plants[i-1].second.second == plants[i].second.second) {
            if (plants[i-1].second.first <= plants[i].second.first) {
                cout << -1 << endl;
                return;
            }
        }

        // if it has a zero growth rate
        if (plants[i-1].second.second == 0) {
            if (plants[i-1].second.first <= plants[i].second.first) {
                cout << -1 << endl;
                return;
            }
        }

        // if it has a negative growth rate
        if (plants[i-1].second.second < 0) {
            if (plants[i-1].second.first <= plants[i].second.first) {
                cout << -1 << endl;
                return;
            }
        }

        // if it has a smaller growth rate than the previous
        if (plants[i-1].second.second < plants[i].second.second && plants[i-1].second.first < plants[i].second.first) {
                cout << -1 << endl;
                return;
        }
    }

    int days = 0;
    while(true) {
        if (check(plants, n)) {
            break;
        }

        for (int i = 0; i < n; i++) {
            plants[i].second.first += plants[i].second.second;
        }

        days++; 
        if (days > 100000) {
            days = -1;
            break;
        };
    }

    cout << days << endl;

}

int main() {
    int t; cin >> t;
    while (t) {
        solve();
        t--;
    }
}
