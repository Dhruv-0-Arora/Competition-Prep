#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;

    while (t--) {

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

        if (n == 1) { 
            cout << 0 << endl;
            continue;
        }

        sort(plants.begin(), plants.end());

        set<int> days;
            for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if ((plants[i].second.second != plants[j].second.second))
                    days.insert(((plants[i].second.first - plants[j].second.first) / (plants[j].second.second - plants[i].second.second)) + 1);
                
            }
        }


        if (days.size() == 0) {
            cout << -1 << endl;
            continue;
        }

        bool exists = false;
        for (auto i : days) {
            if (i >= 0) {
                vector<ll> plantsCopy;
                for (int j = 0; j < n; j++) {
                    plantsCopy.push_back((plants[j].second.first + (plants[j].second.second * i)));
                }
                
                bool descending = true;
                for (int j = 1; j < plantsCopy.size(); j++) {
                    if (plantsCopy[j] >= plantsCopy[j-1]) {
                        descending = false;
                    }
                }
                if (descending) {
                    cout<< i << endl;
                    exists = true;
                    break;
                }
            }
        }
        if (!exists) {
            cout << -1 << endl;
        }
    
    }
}