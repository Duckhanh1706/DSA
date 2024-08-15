#include<bits/stdc++.h>

using namespace std;
void next(int a[],int n){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]) i--;
	if(i==0){
		for(int j=1;j<=n;j++){
			cout<<j<<" ";
		}
	}else{
		int k=n;
		while(k>i && a[k]<a[i]) k--;
		swap(a[i],a[k]);
		for(int j=1;j<=n;j++){
			cout<<a[j]<<" ";
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		next(a,n);
		cout<<endl;
	}
}
