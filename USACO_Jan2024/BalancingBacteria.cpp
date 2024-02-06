#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(vector<ll>& a, int& ans) {
    // power is = to length
    int power = a.size();
    // multiplicity = first element
    ll multiplicity = a[0]; ans += abs(multiplicity);
    if (multiplicity == 0) return;

    for (int i = a.size() - 1; i > 0; i--) {
        a[i] += (power * multiplicity * -1);
        power --;
    }
}

int main() {
    // inputing N number of patches of field
    int N; cin >> N;

    // input each path
    vector<ll> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    // call function to find the answer
    int ans = 0;
    // for the length of the vector
    for (int i = 0; i < N; i++) {
        solve(a, ans);

        a.erase(a.begin());
    }

    cout << ans << endl;

}
