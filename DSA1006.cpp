#include<bits/stdc++.h>

using namespace std;
bool final=false;
int x[100];
void init(int n){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}
void sinh(int n){
	int i=n;
	while(i>=1 && x[i]>x[i+1]){
		--i;
	}
	if(i==0){
		final=true;
	}
	else{
		int j=n;
		while(x[i]>=x[j]){
			j--;
		}
		swap(x[i],x[j]);
		reverse(x+i+1,x+n+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		init(n);
		vector<string> v; 
		while(!final){
			string s;
			for(int i=1;i<=n;i++){
				s+=to_string(x[i]);
			}
			v.push_back(s);
			sinh(n);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		final=false;
	}
}
