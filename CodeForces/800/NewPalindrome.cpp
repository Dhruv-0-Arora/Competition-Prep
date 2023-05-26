#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s = s.substr(0, s.size() / 2);
        int k = unique(s.begin(), s.end()) - s.begin();
        // what is the question mark for
        cout << (k == 1 ? "NO" : "YES") << endl;
    }
}

/*
A palindrome is a string that reads the same from left to right as from right to left. For example, abacaba, aaaa, abba, racecar are palindromes.

You are given a string s
 consisting of lowercase Latin letters. The string s
 is a palindrome.

You have to check whether it is possible to rearrange the letters in it to get another palindrome (not equal to the given string s
).

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains a string s
 (2≤|s|≤50
) consisting of lowercase Latin letters. This string is a palindrome.

Output
For each test case, print YES if it is possible to rearrange the letters in the given string to get another palindrome. Otherwise, print NO.

You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).
*/