#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    string ans[t];

    while(t--) {
        int n;
        cin >> n;

        long long a[n];
        int odd = 0;
        int even = 0;
        bool beautiful = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0) 
            {
                beautiful = false; 
                break;
            }
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        if (!beautiful) {
            ans[t] = "NO";
            continue;
        }

        if (odd == 0 || even == 0) {
            ans[t] = "YES";
            continue;
        }

        sort(a, a + n);

        // for even numbers
        bool beautifulEven = true;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) continue;
            for (int j = 0; j < i; j++) 
            {
                if (a[j] % 2 == 0) break;
                else {beautifulEven = false; break;}
            }
        }
        
        // for odd numbers
        bool beautifulOdd = true;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] % 2 != 0) continue;
            for (int j = 0; j < i; j++) 
            {
                if (a[j] % 2 != 0) break;
                else {beautifulOdd = false; break;}
            }
        }

        if (beautifulEven || beautifulOdd) ans[t] = "YES";
        else ans[t] = "NO";


    }

    cout << sizeof(ans) << endl;

    for (int i = 0; i < sizeof(ans); i++) {
        cout << ans[i] << endl;
    }
    return 0;

}