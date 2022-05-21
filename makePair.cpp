#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	while (n--)
	{
		string w;
		int c = 0;
		cin >> w;
		for (int j = 0; j < w.length(); j++)
		{
			for (int i = 0; i < s.length(); i++)
			{

				if (w[j] == s[i])
					c++;
			}
		}
		if (c == w.length())
			cout << "Yes" << endl;

		else
			cout << "No" << endl;
	}
	return 0;
}