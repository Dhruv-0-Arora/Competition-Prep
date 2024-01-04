#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    vector<long long> cowHeights;
    vector<long long> candyHeights;

    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        cowHeights.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        long long x; cin >> x;
        candyHeights.push_back(x);
    }

    // for each candy
    for (int i = 0; i < m; i++) {
        pair<long long, long long> heightToSuspended = make_pair(candyHeights[i], 0);
        // for each candy, remove the height from each cow on the candy until it is eaten or the cows are too short. Then increase the cows height
        
        for (int j = 0; j < n; j++) { // for each cow
            if (cowHeights[j] > heightToSuspended.second) { // if the cow is tall enough to eat any of the candy left
                long long eaten = min(heightToSuspended.first, cowHeights[j]); // calculate the amount of candy eaten by the cow
                cowHeights[j] += (eaten - heightToSuspended.second); // increase the cow's height by the amount of candy eaten
                heightToSuspended.second = eaten;
                continue;

                if (heightToSuspended.first == heightToSuspended.second) { // if the cow eats all the candy
                    break; // continue to the next candy
                }
            } else {
                continue; // conitnue to the next cow
            }
        }
    }

    // printing each cow
    for (int i = 0; i < n; i++) {
        cout << cowHeights[i] << endl;
    }

}