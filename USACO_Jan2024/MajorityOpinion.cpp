#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){ // solving each test case

    // inputing N number of cows
    int n; cin >> n;

    // inputing the hay each cow likes
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    // finding the frequency of each hay
    vector<int> cnt(n+1, 0); // 1-indexed 
    for(int i=0; i<n; i++)
        cnt[a[i]]++;

    // finding the maximum frequency
    int mx = *max_element(cnt.begin(), cnt.end());

    // if the maximum frequency is greater than the number of cows, then it is impossible
    int diff = n - mx;
    if(mx - diff > 1){
        cout << "-1\n";
        return;
    }

    vector<int> ans;
    for(int i=1; i<=n; i++){
        if(cnt[i] == mx)
            ans.pb(i);
    }
    sort(ans.begin(), ans.end());

    // print out ans
    for(int i=0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main(){
    // interating through each test case
    short t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
