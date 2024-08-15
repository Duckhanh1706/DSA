#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	int a[t+1][t+1]={};
	for(int i=1;i<=t;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	for(int i=1;i<=t;i++){
		for(int j=i+1;j<=t;j++){
			if(a[i][j]==1){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
