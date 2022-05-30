// A subtask problem 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i] == 1) ans++;
        }
        int flag =0;
        for(int i=0;i<m;i++){
            if(v[i] == 1) flag++;
        }
        int score;
        if(ans == v.size()) score =100;
        else if(flag == m) score =k;
        else score =0;

        cout<<score<<endl;
        
    }
    return 0;
}