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
		
		while(!final){
			for(int i=1;i<=n;i++){
				cout<<x[i];
			}
			cout<<" ";
			sinh(n);
		}
		cout<<endl;
		final=false;
	}
}
