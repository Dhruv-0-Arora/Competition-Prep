#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;

    vector<char> infected;
    vector<char> originalVector;
    infected.push_back('0'); originalVector.push_back('0');
    bool first = true;
    bool anyZeros = false;
    for (int i = 0; i < N; i++) {
        char c; cin >> c;
        if (first && c == '0') {
            first = false;
            anyZeros = true;
            infected.push_back('0');
        }
        else if (!anyZeros && c == '0') {
            infected.push_back('0');
            anyZeros = true;
        }
        else if (first && c == '1') {
            infected.push_back('1');
            infected.push_back(c);
        }
        else infected.push_back(c);

        originalVector.push_back(c);
    }
    
    if (anyZeros) {
        for (int i = infected.size()-1; i > 0; i--) {
            if (infected[i] == '0')
                break;
            else infected.push_back('1');
        }
    }

    infected.push_back('0'); originalVector.push_back('0');

    // find the smallest clump of 1s to find the number of nights
    int clump = 1e9;
    for (int i = 1; i <= infected.size(); i++) {
        if (infected[i] == '1' && infected[i-1] == '0') {
            int j = i;
            while (infected[j] == '1') j++;
            clump = min(clump, j-i);
            i = j;
        }
    }

    int nights = (clump - 1) / 2;

    // if ((infected[0] == '1' && infected[1] == '1' && infected[2] == '0')
    // || (infected [N-1] == '1' && infected[N-2] == '1' && infected[N-3] == '0')) {
    //     nights = min(1, nights);
    // }

    int count = 0;
    for (int i = 1; i <= originalVector.size(); i++) {
        if (originalVector[i] == '1' && originalVector[i-1] == '0') {
            int j = i;
            while (originalVector[j] == '1') j++;
            clump = j-i;

            // running through equation
            count += (clump) / ((nights*2) + 1);
            if (clump % ((nights*2) + 1) != 0) count++;

            i = j;
        }
    }  

    cout << count << endl; 

}

