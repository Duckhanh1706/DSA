#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int>a,x;
void init(){
    cin>>n>>k;
    a.resize(n+1);
    x.resize(k+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
}
void solve(){
    for(int i=1;i<=k;i++){
        cout<<a[x[i]]<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) solve();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        Try(1);
    }
}