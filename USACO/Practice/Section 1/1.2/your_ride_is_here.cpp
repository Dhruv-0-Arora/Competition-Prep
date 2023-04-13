/*
ID: dhruvar1
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // opening the files
    ifstream fin;
    fin.open("ride.in");

    string line_file;
    
    while(getline(fin, line_file)) {
       cout << line_file << endl;
       cout << "here";
    }

    fin.close();

    // Adding output to file
//    ofstream fout ("test.out");
//    fout << "GO";
//    fout.close();

    return 0;
}

