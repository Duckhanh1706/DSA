#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i:a){
			cin>>i;
		}
		int ans=2e6;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int c=a[i]+a[j];
				if(abs(c)<abs(ans)){
					ans=c;
				}
			}
		}
		cout<<ans<<endl;
	}
}
