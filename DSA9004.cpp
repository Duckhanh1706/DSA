#include<bits/stdc++.h>

using namespace std;
int V,E,u;
int  check[1001];
vector<vector<int>>a(1001);

void DFS(int u){
	stack<int>st;
	st.push(u);
	check[u]=0;
	cout<<u<<" ";
	while(!st.empty()){
		int s=st.top();
		st.pop();
		for(int i:a[s]){
			if(check[i]){
				cout<<i<<" ";
				check[i]=0;
				st.push(s);
				st.push(i);
				break;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>V>>E>>u;
		a.clear();
		a.resize(V+1);
	for(int i=1;i<=E;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1;i<=V;i++){
		check[i]=1;
	}
		DFS(u);
		cout<<endl;
	}
}
