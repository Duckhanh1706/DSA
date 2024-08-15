#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int V,E;
		cin>>V>>E;
		vector<vector<int>>c(V+1);
		for(int i=1;i<=E;i++){
			int x,y;
			cin>>x>>y;
			c[x].push_back(y);
			c[y].push_back(x);
		}
		for(int i=1;i<=V;i++){
			cout<<i<<": ";
			for(int x:c[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
