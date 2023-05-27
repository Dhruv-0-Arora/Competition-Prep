#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    int first = a + b + c;
    int second = a * b * c;
    int third = a * (b + c);
    int fourth = (a + b) * c;

    cout << max({first, second, third, fourth});
 }