#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;

    vector<short> infected; vector<short> copyInfected;

    infected.push_back('0');
    copyInfected.push_back('0');

    bool first = true;
    bool continuation = false;
    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;
        if (first && c == '0') {
            first = false;
            continuation = true;
        } else if (!continuation && c == '0') 
            continuation = true;
        else if (first && c == '1') 
            infected.push_back('1');
        

        infected.push_back(c);
        copyInfected.push_back(c);
    }
    
    if (continuation) {
        for (int i = infected.size()-1; i > 0; i--) {
            if (infected[i] == '0')
                break;
            else infected.push_back('1');
        }
    }

    infected.push_back('0'); copyInfected.push_back('0');

    int group = INT_MAX;
    for (int i = 1; i <= infected.size(); i++) {
        if (infected[i] == '1' && infected[i-1] == '0') {
            int j = i;
            while (infected[j] == '1') j++;
            group = min(group, j-i);
            i = j;
        }
    }
    int nights = (group - 1) / 2;

    int count = 0;
    for (int i = 1; i <= copyInfected.size(); i++) {
        if (copyInfected[i] == '1' && copyInfected[i-1] == '0') {
            int j = i;
            while (copyInfected[j] == '1') j++;
            group = j-i;

            count += (group) / ((nights*2) + 1);
            if (group % ((nights*2) + 1) != 0) count++;

            i = j;
        }
    }  

    cout << count << endl; 

}

