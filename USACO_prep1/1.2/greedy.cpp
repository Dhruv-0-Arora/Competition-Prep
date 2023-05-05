/*
ID: dhruvar1
PROG: gift1
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

ifstream fin("gift1.in");
ofstream fout("gift1.out");

int main() 
{

    int np;
    fin >> np;

    map<string, int> m;
    string order[np];
    
    for (int i = 0; i < np; i++) {

        string name;
        fin >> name;

        m[name] = 0;
        order[i] = name;
    }

    while (fin.peek() != EOF) {

        string giver;
        fin >> giver;

        int gave, people;
        fin >> gave;
        fin >> people;
        
        int amount = gave / people; // amount per person
        

        m[giver] -= gave; // removing the amount gifted
        m[giver] += gave % people; // giving remainder money

        for (int j = 0; j < people; j++) {
            string person;
            fin >> person;
            m[person] += amount; // adding gift
        }

    }


    for (string name : order) {

        fout << name << " " << m[name] << endl;

    }
}