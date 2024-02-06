#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    set<ll> a;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        a.insert(x);
    }

    int maxL = *min_element(a.begin(), a.end())/4;
    
    int ans = 0;

    for (int i = maxL; i > 0; i--) {
        set<int> b; 
        for (int x : a) {
            b.insert(x%i);
            if (b.size() > 3) 
                goto next;
        }
        ans += i;
        next:;   
    }
    
    cout << ans << endl;
}