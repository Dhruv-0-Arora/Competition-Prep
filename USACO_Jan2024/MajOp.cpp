#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin >> N;

    vector<int> hays(N);
    for(int i=0; i<N; i++)
        cin >> hays[i];

    if(N == 2)
    {
        if (hays[0] == hays[1])
            cout << hays[0] << endl;
        else
            cout << "-1\n";
        return;}

    else if (N == 3) 
    {
        if(hays[0] == hays[1] || hays[0] == hays[2]){
            cout << hays[0] << endl;
        }else if (hays[1] == hays[2])
            cout << hays[1] << endl;
        else
            cout << "-1\n";
        return;
    }
    set<int> answers;
    for (int x = 0; x < N - 2; x++) 
    {
        if(answers.find(hays[x]) != answers.end() && x != N - 3)
            continue;

        if(hays[x] == hays[x+1] || hays[x] == hays[x+2])
        {
            answers.insert(hays[x]);
            continue;
        } 
        
        else if (hays[x+1] == hays[x+2]){
            answers.insert(hays[x+1]);
            continue;
        }} 
    if (answers.empty()) {
        cout << "-1" << endl;
        return;}
    for(auto iterator = answers.begin(); iterator != answers.end(); iterator++){
        cout << *iterator;
        if(next(iterator) != answers.end())
            cout << " ";
    }
    cout << endl;

}

int main() {
    short testcases;
    cin >> testcases;
    while(testcases--)
        solve();
    return 0;
}