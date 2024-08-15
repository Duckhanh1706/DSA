#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x;
		set<int>a,b;
		for(int i=0;i<n;i++){
			cin>>x;
			a.insert(x);
		}
		for(int i=0;i<m;i++){
			cin>>x;
			b.insert(x);
		}
		map<int,int>mp;
		for(auto i:a) mp[i]++;
		for(auto i:b) mp[i]++;
		for(auto it:mp){
			cout<<it.first<<" ";
		}
		cout<<endl;
		for(auto it:mp){
			if(it.second>=2){
				cout<<it.first<<" ";
			}
		}
		cout<<endl;
	}
}
