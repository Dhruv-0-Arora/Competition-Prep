// https://codeforces.com/problemset/problem/1822/C

#include <iostream>

using namespace std;

int main() {

    // t is the number of test cases
    int t, n; 
    cin >> t;

    // total is the total number of buns
    long long totals[t];
    
    // loop through each test case
    for (int x = 0; x < t; x++) {
        // n is the number of buns in each set
        cin >> n;

        // calculating the total amount of chocolate
        totals[x] = (1LL * n + 1)*(1LL * n + 1) + 1;


    }

    for (long long total : totals) {
        cout << total << endl;
    }
}