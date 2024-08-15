#include<bits/stdc++.h>
 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int dd[100001]={0};
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			dd[a[i]]++;
		} 
		if(dd[x])cout<<dd[x];
		else cout<<"-1";
		cout<<endl;
	}
}
