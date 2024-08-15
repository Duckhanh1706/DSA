#include<bits/stdc++.h>

using namespace std;
int V,E,u,check[1000]; 
vector<vector<int>>a; 
void init(){
	cin>>V>>E>>u;
	a.resize(E+1); 
	for(int i=1;i<=E;i++){
		int x,y;
		cin>>x>>y;
		 a[x].push_back(y);
		 a[y].push_back(x); 
	} 
	for(int i=1;i<=V;i++){
		check[i]=0; 
	} 
}
void BFS(int u){
	queue<int>q;
	q.push(u);
	check[u]=1;
	while(!q.empty()){
		int s=q.front();
		q.pop(); 
		cout<<s<<" "; 
		for(int i:a[s]){
			if(check[i]==0){
				q.push(i);
				check[i]=1; 
			}
		} 
	} 
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		a.clear(); 
		init();
		BFS(u); 
		cout<<endl; 
	} 
} 
