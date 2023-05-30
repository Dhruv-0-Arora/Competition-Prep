#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    char arr[] = {'h', 'e', 'l', 'l', 'o'}; int targetIndex = 0;
    for (char c : s)
    {
        if (c == arr[targetIndex])
        {
            targetIndex++;
            if (targetIndex == 5)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}