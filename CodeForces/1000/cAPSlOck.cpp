#include <bits/stdc++.h>
using namespace std;

int main ()

{

    string s; cin >> s;

    bool caps = false;
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            caps = true;
            break;
        }
    }

    if (caps)
    {
        cout << s;
    } else 
    {
        for (char c : s){
            if (islower(c)) {
                cout << (char)toupper(c);
            } else {
                cout << (char)tolower(c);
            }
        }
    }

}