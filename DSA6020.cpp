#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		set<int>s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		if(s.count(x)!=0){
			cout<<"1"<<endl;
		}else cout<<"-1"<<endl;
	}
}
