#include<bits/stdc++.h>

using namespace std;
int n,a[100];
void init(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void row(){
	if(n==0){
		return ;
	}else{
	    cout<<"[";
	    for(int i=0;i<n-1;i++){
	    	cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<"]"<<endl;
		for(int i=0;i<n;i++){
			a[i]=a[i]+a[i+1];
		}
		n--;
		row();
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		row();
	}
}
