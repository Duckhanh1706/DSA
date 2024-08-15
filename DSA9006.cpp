#include<bits/stdc++.h>

using namespace std;
int V,E,u,v;
void DFS(int u,vector<vector<int>>&a, int check[],int truoc[]){
	stack<int>s;
	s.push(u);
	check[u]=1;
	while(!s.empty()){
		int t=s.top();
		s.pop();
		for(int i:a[t]){
			if(check[i]==0){
				check[i]=1;
				s.push(t);
				s.push(i);
				truoc[i]=t;
				break;
			}
		}
	}
}
void Duongdi(int v,int truoc[],int check[]){
	if(check[v]==0){
		cout<<-1;
		return; 
	}else{
		stack<int>way; 
		int last=v;
		while(last!=-1){
			way.push(last);
			last=truoc[way.top()];
		}
		while(!way.empty()){
			cout<<way.top()<<" ";
			way.pop();
		}
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>V>>E>>u>>v;
		int check[V+1];
		for(int i=1;i<=V;i++){
			check[i]=0; 
		} 
		vector<vector<int>>a;
		a.resize(E+1);
		for(int i=1;i<=E;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x); 
		}
		int truoc[V+1];
		for(int i=1;i<=V;i++){
			truoc[i]=-1;
		}
		DFS(u,a,check,truoc);
		Duongdi(v,truoc,check);
	}
}
