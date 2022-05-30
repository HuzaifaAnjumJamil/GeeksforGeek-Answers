#include <iostream>
using namespace std;
#define ll long long

int main() {
  int t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      ll nn= n;
      int sum= 0;
      while(nn>0){
          sum+= nn%10;
          nn/=10;
      }
      if(n%sum) cout<<"No\n";
      else cout<<"Yes\n";
      
  }
  return 0;
}