#include<bits/stdc++.h>

using namespace std;
int n,x[100];
bool ok=false;
void init(){
	cin>>n;
	for(int i=0;i<n;i++){
		x[i]=0;
	}
}
void sinh(){
	int i=n-1;
	while(i>=0 &&x[i]==1){
		x[i]=0;
		i--;
	}
	if(i>=0){
		x[i]=1;
	}else{
		ok=true;
	}
}
void result(){
	for(int i=0;i<n;i++){
		if(x[i]==1){
			cout<<"B";
		}
		else{
			cout<<"A";
		}
	}
	cout<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		while(!ok){
			result();
			sinh();
		}
		cout<<endl;
		ok=false;
	}
}
