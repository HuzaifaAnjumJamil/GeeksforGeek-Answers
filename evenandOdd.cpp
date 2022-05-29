// snake procession

#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll flag = 1, check = 0, a = 1;
        ll ch1 = 0, ch2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '.')
                continue;

            else if (s[i] == 'H' && flag == 1)
                check = 1, flag = 0, ch1++;

            else if (s[i] == 'T' && check == 1)
                check = 0, flag = 1, ch2++;

            else
                a = 0;
        }
        if (a == 0 || ch1 != ch2)
            cout << "Invalid";
        else
            cout << "Valid";
        cout << endl;
    }
    return 0;
}
