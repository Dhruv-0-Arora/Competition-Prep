#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int t; cin >> t;

    while (t--)
    {
        map<string, int> m;
        m["00"] = m["01"] = m["10"] = m["11"] = 1e9;

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            string s;
            cin >> s;
            m[s] = min(m[s], num);
        }
        if (min(m["11"], m["10"] + m["01"]) > (int)1e6)
        {
            cout << "-1\n";
        }
        else
        {
            cout << min(m["11"], m["10"] + m["01"]) << "\n";
        }
    }
}

/*

*/