#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;

    vector<ll> heightsOfCows(n);
    vector<ll> heightsOfCandies (m);

    //input variables
    for (ll& a : heightsOfCows) {
        cin >> a;
    } for (ll& b: heightsOfCandies) {
        cin >> b;
    }

    for (int i = 0; i < m; i++) {
        pair<ll, ll> heightToSuspended = make_pair(heightsOfCandies[i], 0);
        
        for (int j = 0; j < n; j++) {
            if (heightsOfCows[j] > heightToSuspended.second) {
                ll eaten = min(heightToSuspended.first, heightsOfCows[j]); 
                heightsOfCows[j] += (eaten - heightToSuspended.second);
                heightToSuspended.second = eaten;
                continue;

                if (heightToSuspended.first == heightToSuspended.second) {
                    break;
                }
            } else {
                continue;
            }
        }
    }

    for (ll& a : heightsOfCows) {
        cout << a << endl;
    }

}