#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		for(int &i:a) cin>>i;
		sort(a.begin(),a.end());
		int ans=1e9;
		for(int i=1;i<n;i++){
			ans=min(ans,a[i]-a[i-1]);
		}
		cout<<ans<<endl;
	}
}
