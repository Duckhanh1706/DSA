#include<bits/stdc++.h>
using namespace std;
int n, a[100][100],x[100],ans=INT_MAX,cmin=INT_MAX;
int visited[100],dis=0;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(visited[j]==0){
            x[i]=j;
            visited[j]=1;
            dis+=a[x[i-1]][j];
            if(i==n){
                ans=min(ans,dis+a[x[n]][1]);
            }else{
                //nhanh can: neu dis hien tai + so thanh pho con lai*cmin<ans
                if(dis+(n-i+1)*cmin <ans){
                    Try(i+1);
                }
            }
            visited[j]=0;
            dis-=a[x[i-1]][j];
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            cmin=min(cmin,a[i][j]);
        }
    }
    x[1]=1;
    visited[1]=1;
    Try(2);
    cout<<ans<<endl;
}