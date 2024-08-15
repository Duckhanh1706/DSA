#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		multiset<int> ms;
		for(int i=0;i<n;i++){
			cin>>x;
			ms.insert(x);
		}
		for(auto i:ms){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
