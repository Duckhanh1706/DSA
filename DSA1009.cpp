#include<bits/stdc++.h>

using namespace std;
int n,k;
string s;
vector<string> res;
void init(){
	cin>>n>>k;
	s.resize(n);
}
void solve(){
	string x(k,'A');
	if(s.find(x,0) !=-1){
		string sub=s.substr(s.find(x,0)+1);
		if(sub.find(x)==-1){
			res.push_back(s);
		}
	}
} 
void back_track(int i){
	for(int j=0;j<=1;j++){
		if(j==0) s[i]='A';
		if(j==1) s[i]='B';
		if(i==n-1){
			solve();
		}else back_track(i+1);
	}
}
int main(){
	init();
	back_track(0);
	s.resize(n);
	cout<<res.size()<<endl;
	for(string x:res){
		cout<<x<<endl;
	}
}
