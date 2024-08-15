#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[100];
bool ok=false;
void init(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>=1){
		a[i]=1;
	}else{
		ok=true;
	}
}
int check(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==k) return 1;
	else return 0;
}
void result(){
	if(check()==1){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
	    while(!ok){
	    	sinh();
	    	result();
		}
		ok=false;
	}
}
