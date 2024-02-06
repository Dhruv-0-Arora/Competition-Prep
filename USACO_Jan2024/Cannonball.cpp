#include <bits/stdc++.h>
using namespace std;

int main() {
    int length, start;
    cin >> length >> start;
    vector<pair<int, int>> coords(length);

    for (pair<int, int>& coord : coords) {
        cin >> coord.first >> coord.second;
    }

    int position = start - 1;
    int currentPower = 1;
    int targetsBroken = 0;
    while (position < length && position >= 0) {
        // cout << "Position and place and power: " << position + 1 << " " << coords[position].first << " " << coords[position].second << " " << currentPower << endl;
        if (coords[position].first == 1) {
            if (abs(currentPower) >= coords[position].second) {
                coords[position].first = 2;
                targetsBroken++;
                // cout << "Target broken at: " << (position + 1) << endl;
            } else {
                // cout << "Target skipped at: " << (position + 1) << endl;
            }
            position += currentPower;
        } else if (coords[position].first == 0) {
            if (currentPower > 0) {
                currentPower += coords[position].second;
                currentPower *= -1;
            } else {
                currentPower -= coords[position].second;
                currentPower *= -1;
            }
            
            // cout << "Jumppad used at: " << (position + 1) << endl;
            position += currentPower;
            
        } else if (coords[position].first == 2) {
            position += currentPower;
        }
        // cout << "Current position: " << (position + 1) << endl;
    }

    cout << targetsBroken << endl;
}