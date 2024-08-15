#include<bits/stdc++.h>

using namespace std;
int cmp(pair<int,int>a , pair<int,int>b){
	return a.first<b.first;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back({x,i});
		}
		sort(v.begin(),v.end(),cmp);
		int res=-1e9;
		int last=v[0].second;
		for(int i=1;i<n;i++){
			if(v[i].second-last>res){
				res=v[i].second-last;
			}
			last=min(v[i].second,last);
		}
		cout<<res<<endl;
	}
}
