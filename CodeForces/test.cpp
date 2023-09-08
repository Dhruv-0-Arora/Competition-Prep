#include <bits/stdc++.h> 
using namespace std;

void solve() {

    int n, m, h;
    cin >> n >> m >> h;

    vector<pair<int, long long>> participants;
    for (int i = 0; i < n; i++) { // per participant
        
        int a[m];
        int time = 0, count = 0, accumulated = 0;

        for(int j = 0; j < m; j++) { cin >> a[j]; } // getting the time for each problem


        sort(a, a + m);

        // calculating the count of problems finished
        for(int j = 0; j < m; j++) {
            if (time + a[j] <= h) {
                count++;
                time += a[j];
            } else {
                break;
            }
        }

        // calculating penalty
        long long penaltyTime = 0;
        for(int j = 0; j < count; j++) {
            a[j] += accumulated;
            accumulated += (a[j] - accumulated);
            penaltyTime += a[j];
        }

        participants.push_back(make_pair(count, penaltyTime));
    }

    // finding rudolf position
    int rudolf = participants[0].first;
    long long rudolfPenalty = participants[0].second;
    int place = 1;

    for (int i = 1; i < n; i++) {
        if (participants[i].first > rudolf) {
            place += 1;
        } else if (participants[i].first == rudolf) {
            if (participants[i].second < rudolfPenalty) {
                place += 1;
            }
        }
    }

    cout << place << endl;
}

int main() {
    short t; cin >> t;
    while (t--) solve();
}