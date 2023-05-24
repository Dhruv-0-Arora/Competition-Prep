/*

Bessie and Elsie are plotting to overthrow Farmer John at last! They plan it out over N
 (1≤N≤2⋅105
) text messages. Their conversation can be represented by a string S
 of length N
 where Si
 is either B
 or E
, meaning the i
th message was sent by Bessie or Elsie, respectively.

However, Farmer John hears of the plan and attempts to intercept their conversation. Thus, some letters of S
 are F
, meaning Farmer John obfuscated the message and the sender is unknown.

The excitement level of a non-obfuscated conversation is the number of times a cow double-sends - that is, the number of occurrences of substring BB
 or EE
 in S
. You want to find the excitement level of the original message, but you don’t know which of Farmer John’s messages were actually Bessie’s / Elsie’s. Over all possibilities, output all possible excitement levels of S
.

*/

#include <bits/stdc++.h>
using namespace std;

ifstream fin("FEB.in");

int solve(string S, int index, set<int>& K_set) 
{
    if (index == S.length()) {
        for (int i = 0; i < S.length(); i++) {
            cout << S[i];
        }
        cout << endl;
        return 0;
    }

    if (S[index] == 'F') {
        S[index] = 'B';
        solve(S, index + 1, K_set);
        S[index] = 'E';
        solve(S, index + 1, K_set);
        S[index] = 'F';
        solve(S, index + 1, K_set);
    }
    else {
        solve(S, index + 1, K_set);
    }
}

int main() {

    int N;
    fin >> N;

    string S;
    fin >> S;

    set<int> K_set;
    solve(S, 0, K_set);


}