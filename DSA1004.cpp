#include<bits/stdc++.h>

using namespace std;
bool final=false;
vector<int>a;
void solve(int k){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i,int n,int k){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) solve(k);
		else Try(i+1,n,k);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		a.resize(k+1);
		Try(1,n,k);
	}
}
