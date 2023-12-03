#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    int arr[t];
    while (t) {
        int num; cin >> num;
        arr[t-1] = num;
        t--;
    }

    // create a map of numbers to how many times it appears in a row in that section
    vector<pair<int, int>> vp;
    int curr = INT_MIN;
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == curr) {
            
        } else {
            m[curr] = 1;
            curr = arr[i];
            m[arr[i]] = 1;
        }
    }

}

int main() {
    solve();

    return 0;
}