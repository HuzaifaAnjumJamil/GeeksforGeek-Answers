#include <bits/stdc++.h>
using namespace std;
#define ll int 
#define mod 1000000007


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=180;
    if((a+c) == ans && (b+d) == ans){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
  return 0;
}