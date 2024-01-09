#include <bits/stdc++.h>
using namespace std;

void checkIndex(int &index, vector<int> &cows) {
    for (int i = cows.size() - index; i < cows.size(); i++) {
        if (cows[i] == 0) {
            index = i;
            break;
        }
    }

}

int main()
{
    int n; cin >> n;
    vector<int> cows;
    while(n) {
        int x; cin >> x;
        cows.push_back(x);
        n--;
    }

    // sort vector
    sort(cows.begin(), cows.end());

    int maxRev = 0;
    int maxTut = 0;
    int index = cows.size() - 1;
    for(int i = 0; i < cows[cows.size()-1]; i++) {
        int rev = cows[i] * index;
        checkIndex();
        if(rev > maxRev) {
            maxRev = rev;
            maxTut = cows[i];
        }
    }

    cout << maxRev << " " << maxTut << endl;

}