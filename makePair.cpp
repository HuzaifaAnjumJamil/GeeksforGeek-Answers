#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, x, y;
		cin >> m >> x >> y;
		int m_no, lr, rr;
		int house[101] = {0};
		for (int i = 1; i <= m; i++)
		{
			cin >> m_no;
			lr = m_no - (x * y);
			rr = m_no + (x * y);
			for (int i = m_no; i <= rr && i <= 100; i++)
			{
				house[i]++;
			}
			for (int i = m_no; i >= lr && i >= 1; i--)
			{
				house[i]++;
			}
		}
		int ans = 0;
		for (int i = 1; i < 101; i++)
		{
			if (house[i] == 0)
			{
				ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}