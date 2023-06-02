#include <bits/stdc++.h>
using namespace std;


void solve()
{

	long long sum = 0;

	int n; std::cin >> n;
	vector<int> a;
	for (int i = 1; i < n+1; i++)
	{
		a.push_back(i);
		sum += i;
	}

	a[0] += sum % n;

	for (int elem : a)
	{
		std::cout << elem << " ";
	}
	std::cout << endl;

}

int main()
{
	int t; cin >> t;
	while (t--) solve();
}
