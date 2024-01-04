#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;

    vector<pair<int, pair<ll,ll>>> plants(n);
    for (pair<int, pair<ll, ll>>& p : plants) {
        cin >> p.second.first;
    }
    for (pair<int, pair<ll, ll>>& p : plants) {
        cin >> p.second.second;
    }
    for (pair<int, pair<ll, ll>>& p : plants) {
        cin >> p.first;
    }

    if (n == 1) { // corner case
        cout << 0 << endl;
        return;
    }

    sort(plants.begin(), plants.end());

    set<int> days; // days that need to be checked
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (plants[i].second.second != plants[j].second.second)
                days.insert(((plants[i].second.first - plants[j].second.first) / (plants[j].second.second - plants[i].second.second)) + 1);
            
        }
    }

    if (days.size() == 0) { // corner case
        cout << -1 << endl;
        return;
    }

    // print out the max number in days
    cout << *max_element(days.begin(), days.end()) << endl;


}

int main() {
    int t; cin >> t;
    while (t) {
        solve();
        t--;
    }
}
