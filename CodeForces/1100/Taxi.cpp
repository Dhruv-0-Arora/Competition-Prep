#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

sort(a.begin(), a.end(), greater<int>());

    int count = 0;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            continue;
        }
        else if (a[i] == 4) {
            count++;
            continue;
        }
        else if(a[i] == 3)
        {
            int index = find(a.begin(), a.end(), 1) - a.begin();
            if (index) {
                a[index] = -1;
                count++;
                continue;
            }
            count++;
        }
        else if(a[i] == 2)
        {
            twos += 1;
        }
        else if(a[i] == 1)
        {
            ones += 1;
        }
    }

    count += twos / 2;
    if (twos % 2 != 0) {
        count++;
        if (ones > 1)
        {
            ones -= 2;
        } else if (ones > 0)
        {
            ones -= 1;
        }
    } 

    count += ones / 4;
    if (ones % 4 != 0) {
        count++;
    }

    cout << count << endl;


}