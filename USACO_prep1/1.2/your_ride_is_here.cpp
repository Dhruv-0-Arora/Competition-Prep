/*
ID: dhruvar1
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("ride.in");
ofstream fout("ride.out");

bool convert(string word)
{
    int num = 1;
    for (char letter : word) { num *= (int(letter) - 64); }
    if (num % 47 == 27) { return true; }
    return false;
}

int main()
{
    string comet, group;
    fin >> comet >> group;

    bool cometBool = convert(comet);
    bool groupBool = convert(group);

    if (cometBool && groupBool) { fout << "GO" << endl; }
    else { fout << "STAY" << endl; }
}