#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int x, y,n,i,count=0,k=0;
		cin >> n;
		int arr[n];
		k=n;
		arr[n-1] =n;
		for(i=1;i<n;i++){
			if(i%2!=0){
				arr[n-1-i] =k-(n-i);
				k=arr[n-1-i];
			}
			else if(i%2 == 0){
				arr[n-1-i] =k+(n-i);
				k=arr[n-1-i];
			}
		}
		for(i=0;i<n;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
