
#include <bits/stdc++.h>
using namespace std;

int main() {
    // inputing N number of patches of field
    int N; cin >> N;

    // input each path
    vector<long long> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int currentPlant = 0;
    int totalUses = 0;
    while (currentPlant < N) {
        
        // cout << "Current order: ";
        // for (int i = 0; i < N; i++) cout << a[i] << " ";
        // cout << endl;

        totalUses += abs(a[currentPlant]);
        currentPlant++;

        int k = 1;
        for (int i = currentPlant; i < N; i++) {
            a[i] += (((a[currentPlant - 1]) * k) * -1) + (a[currentPlant - 1] * -1);
            k++;
        }

        a[currentPlant - 1] = 0;
    }
    cout << totalUses;
}