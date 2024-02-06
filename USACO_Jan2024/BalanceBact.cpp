#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, ll> pil;

int main() {
    int N; cin >> N;

    queue<ll> bacteria;
    for (int i = 0; i < N; i++) {
        ll temperary;
        cin >> temperary;
       
        bacteria.push(temperary);
    }

    vector<pil> tasks;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        ll multiplicity = bacteria.front(); bacteria.pop();

        for (int j = tasks.size() - 1; j >= 0; j--) {
            multiplicity += ((tasks[j].first - (N-i) + 1) * tasks[j].second * -1);
        }

        if (multiplicity == 0) continue;
        ans += abs(multiplicity);

        tasks.push_back(make_pair(N-i, multiplicity));
    }

    cout << ans << endl;
}