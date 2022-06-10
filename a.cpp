#include <bits/stdc++.h>
using namespace std;

// write a function to convert int n divided by 6 to ceiling of n/6
int ceil(int n)
{
	return (n + 5) / 6;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;

		if (n <= 6)
			cout << x << endl;
		else
			cout << ceil(n) * x << endl;
	}
	return 0;
}
