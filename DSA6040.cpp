#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<int>a(n),b(m),c(k);
		map<int,int>mp;
		for(int &i:a) cin>>i;
		for(int &i:b) cin>>i;
		for(int &i:c) cin>>i;
		vector<long long>res;
		int i=0,j=0,z=0;
		while(i<n && j<m && z<k){
			if(a[i]==b[j] && b[j]==c[z]){
				res.push_back(a[i]);
				i++,j++,z++;
			}
			else if(a[i]<b[j]) i++;
			else if(b[j]<c[z]) j++;
			else z++;
		}
		if(res.empty()) cout<<-1;
		else{
			for(auto i:res){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
} 
