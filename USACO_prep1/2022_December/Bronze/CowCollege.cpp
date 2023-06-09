#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    long long a[n]; for (int i = 0; i < n; i++) cin >> a[i]; sort(a, a+n);

    long long maxMoney = 0; long long charge = 0;

    for (int i = 0; i < n; i++) 
    {

        if((n - (i))*a[i] > maxMoney)
        {
            maxMoney = (n - (i))*a[i];
            charge = a[i];
        }
    }

    cout << maxMoney << " " << charge << endl;
}