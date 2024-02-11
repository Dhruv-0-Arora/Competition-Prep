#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    // inputing N number of cows
    int n; cin >> n;

    // inputing the hay each cow likes
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    // if length is 2 corner case
    if(n == 2){
<<<<<<< Updated upstream
        if (a[0] == a[1])
            cout << a[0] << endl;
        else
            cout << "-1\n";
        return;
    }

    // if length is 3 corner case
    else if (n == 3) {
        if(a[0] == a[1] || a[0] == a[2])
            cout << a[0] << endl;
        else if (a[1] == a[2])
            cout << a[1] << endl;
        else
            cout << "-1\n";
=======
        cout << "-1\n";
>>>>>>> Stashed changes
        return;
    }
    
    // set of answers
    set<int> ans;

    // interate through groups of 3
    for (int i = 0; i < n - 2; i++) {
        // if the a[i] is in set then continue
        if(ans.find(a[i]) != ans.end() && i != n - 3)
            continue;

        // find if any element frequency is greater than 1
        if(a[i] == a[i+1] || a[i] == a[i+2]){
            ans.insert(a[i]);
            continue;
        } else if (a[i+1] == a[i+2]){
            ans.insert(a[i+1]);
            continue;
        }

    } 

    // if ans is empty then print -1
    if(ans.empty()){
        cout << "-1\n";
        return;
    }

    // print out ans but remove the space for the final one
    for(auto it = ans.begin(); it != ans.end(); it++){
        cout << *it;
        if(next(it) != ans.end())
            cout << " ";
    }
    cout << endl;

}

int main() {
    // interating through each test case
    short t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}