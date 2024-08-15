#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		set<int> x,y;
		for(int &i:a){
			cin>>i;
			x.insert(i);
		}
		for(int &i:b){
			cin>>i;
			y.insert(i);
		}
		long long ans=(*x.rbegin()) *  (*y.begin());
		cout<<ans<<endl;
	}
}
