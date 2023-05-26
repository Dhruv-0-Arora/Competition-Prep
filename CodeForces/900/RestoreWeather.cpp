#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        // getting array values
        vector<int> a, b, acopy;
        for (int i = 0; i < n; i++) 
        {
            int temp; cin >> temp;
            a.push_back(temp); acopy.push_back(temp);
        }
        for (int i = 0; i < n; i++) 
        {
            int temp; cin >> temp;
            b.push_back(temp);
        }

        sort(a.begin(), a.end()); sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            // find index of a[i] in acopy[i] and swap them in a[] and b[]
            int index = find(acopy.begin(), acopy.end(), a[i]) - acopy.begin();
            int temp; temp = a[index];
            a[index] = a[i]; a[i] = temp;

            temp = b[i];
            b[i] = b[index]; b[index] = temp;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

}


