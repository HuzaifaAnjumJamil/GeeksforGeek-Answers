#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   long long c=0;
	  char a[n];
	  for(int i=0;i<n;i++){
	    cin>>a[i];
        if(a[i]=='1')
	        c++;    
	  }
	  cout<<(c*(c+1))/2<<endl;
	}
	return 0;
}