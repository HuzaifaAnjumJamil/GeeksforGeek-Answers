// chef in vaccination queue

// pth postion from the front of the queue
// x minutes to vaccinate a child abd y minutes to vaccinate a elderly person
// chef is an elderly person

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, x, y;
        cin >> n >> p >> x >> y;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for(ll i = 0; i < p; i++)
        {
            if(a[i] == 1)
            {
                ans += y;
            }
            else
            {
                ans += x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}