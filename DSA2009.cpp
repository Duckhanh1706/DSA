#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[21];
bool ok;
void Try(int sum,int cnt){
    if(ok) return;
    if(cnt==k){
        ok=true;
        return;
    }
    for(int i=1;i<=n;i++){
        if(sum==s){
            Try(0,cnt+1);
        }else{
            if(sum<s){
                Try(sum+a[i],cnt);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s+=a[i];
        }
        ok=false;
        if(s%k!=0){
            cout<<0<<endl;
        }else{
            s/=k;
            Try(0,0);
            if(ok=true){
                cout<<1<<endl;
            }else cout<<0<<endl;
        }
    }
}