#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    long long k; cin >> k;
    int a[n], acopy[n], b[n], bcopy[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    copy(a, a + n, acopy);
    sort(a, a + n);
    sort(b, b + n);

    // print a
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;

    // print acopy
    for (int i = 0; i < n; i++) {
        cout << acopy[i] << " ";
    } cout << endl;

    // reverse sort a transfered to b
    // for (int i = 0; i < n; i++) {
    //     // find index of a[i] in acopy
    //     int index = find(acopy, acopy + n, a[i]) - acopy;
    //     bcopy[i] = b[index];
    // }

    // print bcopy
    // for (int i = 0; i < n; i++) {
    //     cout << bcopy[i] << " ";
    // } cout << endl;
}

int main() 
{
    short t; cin >> t;
    while (t--) solve();
}