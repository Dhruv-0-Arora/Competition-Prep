#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int n, start;
    cin >> n >> start;
    vector<pii> coords(n);
    int lastPadPower;
    for (pii& coord : coords) {
        cin >> coord.first >> coord.second;
    }
    int position = start - 1, power = 1, a = 0;
    while (position < n && position >= 0) {
        if (coords[position].first == 1) {
            if (abs(power) >= coords[position].second) {
                coords[position].first = 2;
                a++;
            }
            position += power;
        } else if (coords[position].first == 0) {
            if (power > 0) {
                power += coords[position].second;
                power *= -1;
              if(lastPadPower == 0 && coords[position].second == 0){
                break;
                } else{
                lastPadPower = coords[position].second;
                }
            } else {
                power -= coords[position].second;
                power *= -1;
              if(lastPadPower == 0 && coords[position].second == 0){
                break;
                } else{
                lastPadPower = coords[position].second;
                }
            }
            position += power;
        } else if (coords[position].first == 2) {
            position += power;
        }
    }
    cout << a;
  return 0;
}