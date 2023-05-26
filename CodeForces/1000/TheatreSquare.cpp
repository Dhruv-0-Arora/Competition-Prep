/*
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{

    // 1. take input
    long long n, m, a;
    cin >> n >> m >> a;
    // 2. divide n by a and m by a
    long long x = n / a;
    long long y = m / a;
    // 3. if n or m is not divisible by a, add 1 to the result
    if (n % a != 0) x++;
    if (m % a != 0) y++;
    // 4. multiply the results
    // 5. print the result
    cout << x * y << endl;

}