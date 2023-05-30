#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    // if n is in luck numbers, print YES
    if (find(begin(luckyNumbers), end(luckyNumbers), n) != end(luckyNumbers))
    {
        cout << "YES";
        return 0;
    }

    for (int luckyNumber : luckyNumbers) {
        if (n % luckyNumber == 0 && n > luckyNumber)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}