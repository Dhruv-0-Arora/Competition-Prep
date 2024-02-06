#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int l, s;
    cin >> l >> s;
    vector<pii> coords(l);

    for (pii& coord : coords) {
        cin >> coord.first >> coord.second;
    }

    int position = s - 1, power = 1, a = 0;
    while (position < l && position >= 0) {
        if (coords[position].first == 1) {
            if (abs(power) >= coords[position].second) {
                coords[position].first = 2;
                a++;
            } else {
            }
            position += power;
        } else if (coords[position].first == 0) {
            if (power > 0) {
                power += coords[position].second;
                power *= -1;
            } else {
                power -= coords[position].second;
                power *= -1;
            }
            
            position += power;
            
        } else if (coords[position].first == 2) {
            position += power;
        }
    }

    cout << a << endl;
}