#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int l, s;
    cin >> l >> s;
    vector<pii> coords(l);
    vector<int> loopchecker;
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
                if(coords[position].second == 0){
                if(loopchecker[position] != power){
                loopchecker[position] = power;
              } else{
              break;
              }
                }
            } else {
                power -= coords[position].second;
                power *= -1;
              if(coords[position].second==0){
              if(loopchecker[position] != power){
                loopchecker[position] = power;
              } else{
              break;
              }
              }
            }

            position += power;

        } else if (coords[position].first == 2) {
            position += power;
        }
    }

    cout << a << endl;
}