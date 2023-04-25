/*
ID: dhruvar1
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<numeric>

using namespace std;

ifstream fin("ride.in");
ofstream fout("ride.out");

// void printVector (vector<int> arr) 
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr.at(i) << endl;
//     }
// }

int main()
{
    string a;
    string b;
    fin >> a >> b;
    // fout << a << " " << b << endl;
    
    vector<int> arr;
    for (char c : a) 
    {
       int i = c - 87 + 23;
       arr.push_back(i);
    }

    if (accumulate(arr.begin(), arr.end(), 1, multiplies<double>()) % 47 == 27) 
    {
        vector<int> arr2;
        for (char c : b) 
        {
        int i = c - 87 + 23;
        arr2.push_back(i);
        }

        if (accumulate(arr2.begin(), arr2.end(), 1, multiplies<double>()) % 47 == 27)
        {
            fout << "GO" << endl;
        }
        else 
        {
            fout << "STAY" << endl;
        }
    }
    else {
        fout << "STAY" << endl;
    }
}