#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int &i:a) cin>>i;
		vector<vector<int>> v;
		for(int i=0;i<n;i++){
			bool check=false;
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					check=true;
					swap(a[j],a[j+1]);
				}
			}
			if(!check) break;
			v.push_back(a);
		}
		for(int i=v.size()-1;i>=0;--i){
			cout<<"Buoc "+ to_string(i+1)+": ";
			for(int j=0;j<n;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
