// https://codeforces.com/problemset/problem/1822/C

#include <fstream>
#include <iostream>

using namespace std;

int main() {

    int t, n; 
    cin >> t;

    int total;
    for (int x = 0; x < n; x++) {
        cin >> n;

        total = 10;
        total += n*4;

        for (int i = 5; i <= n; i++) {
            total += (i-1) + (i-2);
        }

        cout << total;

    }
}