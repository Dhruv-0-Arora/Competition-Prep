// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int n; cin >> n;

//     vector<int> a;

//     for (int i = 0; i < n; i++) {
//         int temp;
//         cin >> temp;
//         a.push_back(temp);
//     }

// sort(a.begin(), a.end(), greater<int>());

//     int count = 0;
//     int ones = 0;
//     int twos = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] == -1) {
//             continue;
//         }
//         else if (a[i] == 4) {
//             count++;
//             continue;
//         }
//         else if(a[i] == 3)
//         {
//             int index = find(a.begin(), a.end(), 1) - a.begin();
//             if (index) {
//                 a[index] = -1;
//                 count++;
//                 continue;
//             }
//             count++;
//         }
//         else if(a[i] == 2)
//         {
//             twos += 1;
//         }
//         else if(a[i] == 1)
//         {
//             ones += 1;
//         }
//     }

//     count += twos / 2;
//     if (twos % 2 != 0) {
//         count++;
//         if (ones > 1)
//         {
//             ones -= 2;
//         } else if (ones > 0)
//         {
//             ones -= 1;
//         }
//     } 

//     count += ones / 4;
//     if (ones % 4 != 0) {
//         count++;
//     }

//     cout << count << endl;


// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int j = 0; j < n; j++) {
        if (arr[j] == 1) {
            one++;
        } else if (arr[j] == 2) {
            two++;
        } else if (arr[j] == 3) {
            three++;
        } else if (arr[j] == 4) {
            four++;
        }
    }

    int result = 0;

    result += four;

    while (one > 0 && three > 0) {
        one--;
        three--;
        result++;
    }

    while (two > 1) {
        two -= 2;
        result++;
    }

    if (three > 0) {
        result += three;
    }

    while (one > 1 && two > 0) {
        one -= 2;
        two--;
        result++;
    }

    if (one > 0 && two > 0) {
        one--;
        two--;
        result++;
    }

    if (two > 0) {
        result += two;
    }

    while (one > 0) {
        if (one > 3){
            result += 1;
            one -= 4;
        } else {
            result++;
            break;
        }
    }
            
    cout << result << endl;
}