#include<bits/stdc++.h>
using namespace std;
int n,s, res;
int a[31],x[31];

void Try(int i,int bd,int sum){
    for(int j=bd;j<=n;j++){
        if(sum+a[j]<=s){
            x[i]=a[j];
            if(sum+a[j]==s){
                res=min(res,i);
            }
            else{
                Try(i+1,j+1,sum+a[j]);
            }
        }
        else return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        res=INT_MAX;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
        Try(1,1,0);
        if(res==INT_MAX){
            cout<<"-1"<<endl;
        }
        else cout<<res<<endl;
    }
}