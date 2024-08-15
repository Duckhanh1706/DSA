#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int &i:a) cin>>i;
		sort(a.rbegin(),a.rend());
		for(int i=0;i<n/2;i++){
			cout<<a[i]<<" "<<a[n-i-1]<<" ";
		}
		if(n%2!=0) cout<<a[n/2];
		cout<<endl;
	} 
}
