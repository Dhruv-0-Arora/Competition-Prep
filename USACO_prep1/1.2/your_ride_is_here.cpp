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

int main()
{
    string N;
    fin >> N;
    cout << N;
    fout << N << endl;

    return 0;
}

