#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n+1,0);
		for(int i=1;i<=n;i++){
			cin>>a[i];
			a[i]+=a[i-1];
		}
		int c=0;
		for(int i=1;i<=n;i++){
			int suml=a[i-1];
			int sumr=a[n]-a[i];
			if(suml==sumr){
				cout<<i<<endl;
				c=1;
				break;
			}
		}
		if(c==0) cout<<"-1"<<endl; 
	}
}
