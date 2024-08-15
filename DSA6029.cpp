#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	vector<vector<int>>v;
	for(int &i:a) cin>>i;
	for(int i=0;i<n;i++){
		int j=i;
		while(j>0 && a[j]<a[j-1]){
			swap(a[j],a[j-1]);
			j--;
		}
		vector<int> t(a.begin(),a.begin()+i+1);
		v.push_back(t);
	}
	for(int i=v.size()-1;i>=0;--i){
		cout<<"Buoc "+to_string(i)+": ";
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
