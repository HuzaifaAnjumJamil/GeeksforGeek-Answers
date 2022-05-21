
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

int main()
{
	ll n, k, t,temp;
	cin >> t;
	while (t--)
	{
		cin >> n >> k ;
		ll max =0;
		for (int i = 1; i <= k; i++)
		{
			temp = n%i;
			if (temp > max)
				max = temp;
		}
		cout << max << endl;
	}

		

	return 0;
}