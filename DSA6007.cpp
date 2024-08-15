#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;i++){
			cin>>x;
			a.push_back(x);
		}
		b=a;
		sort(a.begin(),a.end());
		int l=0;
		int r=n-1;
		for(int i=0;i<n;i++){
			if(a[i]==b[i]){
				l++;
			}
			if(a[i]!=b[i]) break;
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]==b[i]){
				r--;
			}
			if(a[i]!=b[i]) break;
		}
		cout<<l+1<<" "<<r+1<<endl;
	}
}
