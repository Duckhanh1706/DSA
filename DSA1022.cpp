#include<bits/stdc++.h>

using namespace std;

bool ok=false;
void sinh(vector<int> &x){
	int n=x.size();
	int i=n-2;
	while(i>=0 && x[i]>x[i+1]){
		i--;
	}
	if(i>=0){
		int k=n-1;
		while(x[i]>x[k]){
			k--;
		}
		swap(x[i],x[k]);
		reverse(x.begin()+i+1, x.end());
	}
	else{
		ok=true;
	}
}
void luu(){
	int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int>x(n);
		vector<vector<int>>v;
		for(int i=0;i<n;i++){
			x[i]=i+1;
		}
		ok=false;
		while(!ok){
			v.push_back(x);
			sinh(x);
	    }
	    int dem=1;
	    for(int i=0;i<v.size();i++){
	    	if(v[i]==a){
	    		cout<<dem<<endl;
			}
			++dem;
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		
		luu();
}
}
