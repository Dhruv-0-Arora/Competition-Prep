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

int convert(string word)
{
    int num = 1;
    for (char letter : word) { num *= (int(letter) - 64); }
    return (num % 47);
}

int main()
{
    string comet, group;
    fin >> comet >> group;

    int cometNum = convert(comet);
    int groupNum = convert(group);

    if (cometNum == groupNum) { fout << "GO" << endl; }
    else { fout << "STAY" << endl; }
}