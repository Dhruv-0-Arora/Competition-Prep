#include <bits/stdc++.h>
using namespace std;

set<int> s;


void recurse(vector<short> arr) {
    if (find(arr.begin(), arr.end(), 2) != arr.end()) {
        // find the first instance of 2
        int first = find(arr.begin(), arr.end(), 2) - arr.begin();;
        
        arr[first] = 0;
        recurse(arr);

        arr[first] = 1;
        recurse(arr);
    } else {
        // find excitement levels
        int count = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == 0 && arr[i-1] == 0)
                count++;
            else if (arr[i] == 1 && arr[i-1] == 1)
                count++;
        }

        s.insert(count);
    }
}


void solve() {
    int t; cin >> t;
    vector<short> arr;
    while(t) {
        char c; cin >> c;
        if (c == 'F')
            arr.push_back(2);
        else if (c == 'B')
            arr.push_back(0);
        else if (c == 'E')
            arr.push_back(1);
        t--;
    }


    recurse(arr);

    // print size of s
    cout << s.size() << endl;

    // print s
    for (auto i : s)
        cout << i << endl;

    
}


int main() {
    solve();

    return 0;
}