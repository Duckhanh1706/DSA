#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int  n,x;
		cin>>n>>x;
		int ans=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==x){
				ans=i;
			}
		}
		cout<<ans+1;
		cout<<endl;
	}
}
