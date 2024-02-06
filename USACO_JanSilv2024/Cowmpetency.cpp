#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "START" << endl;
    short t;
    cin >> t;

    while (t--) {

        cout << "NEW TEST CASE: " << endl;
        
        int numCows, numInfos, maxCompetency;
        cin >> numCows >> numInfos >> maxCompetency;

        int cows[numCows];
        for (int i = 0; i < numCows; i++) cin >> cows[i];

        vector<pair<int, int>> infos(numInfos);
        for (pair<int, int>& infoCase : infos) {
            cin >> infoCase.first >> infoCase.second;
        }

        // adding info

        bool impossible = false;
        while (infos.size() > 0 || impossible == true) {

            cout << "Current lineup: ";
            for (int i = 0; i < numCows; i++) cout << cows[i] << " ";
            cout << endl;
            cout << "Current info: " << infos[0].first << " " << infos[0].second << endl;

            int isZero = -1;

            int tempMax = cows[0];
            for (int i = 1; i < (infos[0].first); i++) {
                tempMax = max(tempMax, cows[i]);
                if (cows[i] == 0) isZero = i;
            }
            // searching for max
            if (tempMax == 0) tempMax++;
            
            for (int i = (infos[0].first); i < (infos[0].second - 1); i++) {
                if ((cows[i] > tempMax) && (isZero == -1)) {
                    impossible = true;
                    goto exit;
                }
                if ((cows[i] > tempMax) && (isZero != -1)) {
                    cows[isZero] = cows[i];
                    break;
                }
            }
            // seeing if the max is already over the maxCompetency or competency is set and is lower than tempMax

            if ((tempMax >= maxCompetency) || (cows[infos[0].second] != 0 && tempMax > cows[infos[0].second])) {
                impossible = true;
                break;
            }

            if (cows[infos[0].second - 1] == 0) cows[infos[0].second - 1] = tempMax + 1;
            infos.erase(next(infos.begin()) - 1);
        }

        exit:

        if (impossible) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < numCows; i++) {
                if (cows[i] != 0) {
                    cout << cows[i] << " ";
                } else {
                    cout << "1 ";
                }
            }
            cout << endl;
        }

        // printing answer

    }

}