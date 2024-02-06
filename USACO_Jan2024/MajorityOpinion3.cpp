#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int numCows;
        cin >> numCows;
        int cows[numCows];
        for (int i = 0; i < numCows; i++) {
            cin >> cows[i];
        }

        if(numCows == 2){
            if (cows[0] == cows[1])
                cout << cows[0] << endl;
            else
                cout << "-1\n";
            return;
        }

        int position = 0;
        set<int> possibleHays;

        while (position < numCows - 2) {
            if (position != numCows - 1 - 2) {
                if (possibleHays.find(cows[position]) != possibleHays.end()) {
                    if (cows[position] == cows[position + 1] || cows[position] == cows[position + 2]) {
                        possibleHays.insert(cows[position]);
                    } else if (cows[position + 1] == cows[position + 2]) {
                        possibleHays.insert(cows[position + 1]);
                    }
                }
            } else {
                if (cows[position] == cows[position + 1] || cows[position] == cows[position + 2]) {
                    possibleHays.insert(cows[position]);
                } else if (cows[position + 1] == cows[position + 2]) {
                    possibleHays.insert(cows[position + 1]);
                }
            }
            position++;
        }

        if (possibleHays.size() == 0) {
            cout << "possibleHays: " << " " << -1 << endl;
        } else {
            cout << "possibleHays: " << " ";
            for(auto i : possibleHays)
                cout << i << " ";
            cout << endl;
        }
    }
}