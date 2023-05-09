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

int main() 
{
    ifstream fin("gift1.in");
	ofstream fout("gift1.out");

	int NP = 0, amount = 0, friends = 0;
    fin >> NP;

	string names[NP];
	map<string, int> sums;

	for(int i = 0; i < NP; i++) { // adding the names to names array
		fin >> names[i];
		sums[names[i]] = 0;
	}

    string name;
	for(int i = 0; i < NP; i++) {
		fin >> name;
		fin >> amount >> friends;
		if (friends == 0) continue;
		
		int share = amount / friends;
		sums[name] -= share * friends;
		for(int x = 0; x < friends; x++) {
			fin >> name;
			sums[name] += share;
		}
	}

	for (int i = 0; i < NP; i++) { // outputing the totals
		fout << names[i] << " " << sums[names[i]] << endl;
	}
	
}