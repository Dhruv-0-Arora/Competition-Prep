// https://codeforces.com/problemset/problem/1822/C

#include <fstream>
#include <iostream>

using namespace std;

int main() {

    // t is the number of test cases
    int t, n; 
    cin >> t;

    // total is the total number of buns
    long long total;
    
    // loop through each test case
    for (int x = 0; x < t; x++) {
        // n is the number of buns in each set
        cin >> n;

        // total > 10 because n > 4
        total = 10;
        total += n*4;

        // calculate the chocolate for each bun
        for (int i = 5; i <= n; i++) {
            // adding two lines for each level of the bun
            total += (i-1) + (i-2);
        }

        // print the total chocolate on the buns
        cout << total;

    }
}