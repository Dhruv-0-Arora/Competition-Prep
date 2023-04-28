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

bool convert(string word)
{
    int num = 1;
    for (char letter : word)
    {
        num = num * (int(letter)) - 64;
    }
    cout << num << endl;
    if (num % 47 == 27) 
    {
        return true;
    }
    return false;
}

int main()
{
    string comet, group;
    fin >> comet >> group;

    bool cometBool = convert(comet);
    bool groupBool = convert(group);

    if (cometBool && groupBool)
    {
        fout << "GO" << endl; 
    }
    else 
    {
        cout << cometBool << " " << groupBool << endl;
        // fout << "STAY" << endl;
    }
}