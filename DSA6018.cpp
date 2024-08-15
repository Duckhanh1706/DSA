#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		set<int>s;
		for(int &i:a){
			cin>>i;
			s.insert(i);
		}
		int ans=0;
		ans=*s.rbegin()-*s.begin()+1-s.size();
		cout<<ans<<endl;
	}
} 
