#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		map<int,int>m;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			m[x]++; 
		} 
		int c=0;
		for(auto i:m){
			if(i.second>n/2){
				cout<<i.first;
				c=1;
			}
		}
		if(c==0)
		cout<<"NO"<<endl;
	}
}
