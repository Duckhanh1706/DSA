#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>a,b;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<m;i++){n
			int x;
			cin>>x;
			b.push_back(x);
		}
		int e=fmax(n,m);
		int f=fmin(n,m);
		int c=0;
		for(int i=0;i<e;i++){
			for(int j=0;j<f;j++){
				if(pow(a[i],b[j])>pow(b[j],a[i])){
					c++;
				}
			}
		}
		cout<<c<<endl;
	}
}
