#include<bits/stdc++.h>

using namespace std;
int n;
string s;
vector<string>res;
void init(){
	cin>>n;
}
void solve(){
	if(s[0]=='H' && s[n-1]=='A' && s.find("HH")==-1){
		res.push_back(s);
	}
}
void result(){
	sort(res.begin(), res.end());
	for(string x:res){
		cout<<x<<endl;
	}
}
void back_track(int i){
	for(int j=0;j<=1;j++){
		if(j==0){
			s[i]='H';
		}
		if(j==1){
			s[i]='A';
		}
		if(i==n-1){
			solve();
		}else{
			back_track(i+1);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		s.resize(n);
	    res.clear();
		back_track(0);
		result();
	}
}
