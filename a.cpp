#include <bits/stdc++.h>
using namespace std;
#define ll int 
#define mod 1000000007


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,m,d;
    cin>>x>>m>>d;
    ll ans=0;
    ll a=x * m;
    ll b=x + d;
    ans = min(a,b);
    cout<<ans<<endl;

  }
  return 0;
}