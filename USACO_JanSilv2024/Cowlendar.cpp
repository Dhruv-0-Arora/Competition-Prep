#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    // doesn't matter
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // inputing the variables (doesn't matter)
    int N; cin >> N;
    set<int> a;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        a.insert(x);
    }

    // finding the max length of variable L
    int maxL = *min_element(a.begin(), a.end())/4;

   
    // reimplement without queue
    vector<int> possibleL; int ans = 0;
    for (int i = maxL; i >= 1; i--) {
        if (i == 1 || i == 2 || i == 3 || i == 4) {
            ans += i;
            continue;
        }
        possibleL.push_back(i);
    }

    for (int L : possibleL) {
              
        set<int> b; 
        for (int x : a) {
            b.insert(x%L);
            if (b.size() > 3) 
                break;
        }

        if (b.size() > 3) 
            continue;
        
        // if any numbers in possibleL are a factor of L then erase them and ans += that number
        for (int i = possibleL.size(); i > 0; i--) {
            if (possibleL[i] == L) break;
            else if (L % possibleL[i] == 0) {
                ans += possibleL[i];
                cout << possibleL[i] << " " << L << endl;
                possibleL.erase(possibleL.begin() + i);
                i++;
            }
        }
        ans += L;
        
    }
    
    cout << ans << endl;
   
    // queue of all numbers going down from maxL
    // int ans = 0;
    // queue<int> q; vector<int> works;
    // for (int i = maxL; i >= 1; i--) {
    //     if (i == 1 || i == 2 || i == 3 || i == 4) { // if L is 1, 2, 3, or 4 continue
    //         ans += i;
    //         continue;
    //     }
    //     q.push(i);
    // }

    // while(!q.empty()) { // while queue is not empty
    //     int L = q.front(); q.pop(); // pop the front of the queue
    //     // if L is a factor of any number in works then continue
    //     if (any_of(works.begin(), works.end(), [L](int x) {return x%L == 0;})) {
    //         ans += L;
    //         continue;
    //     }
        
    //     set<int> b; 

    //     // for each element in a check a % i and add to set
    //     for (int x : a) {
    //         b.insert(x%L);
    //         if (b.size() > 3) 
    //             break;
    //     }

    //     // if set length > 3 continue
    //     if (b.size() > 3) 
    //         continue;
        
    //     ans += L;
        
    // }

    // cout << ans << endl;

}