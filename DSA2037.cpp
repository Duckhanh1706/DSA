#include<bits/stdc++.h>

using namespace std;
int n,a[100],x[100];
bool cmp(int a,int b){
	return a>b;
}
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	sort(x+1,x+n+1,cmp);
}
int check(int s){
	if(s<2) return 0;
	for(int i=2;i<=sqrt(s);i++){
		if(s%i==0) return 0;
	}
	return 1;
}
void result(){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]){
			sum+=x[i];
		}
	}
	
	if(check(sum)){
		for(int i=1;i<=n;i++){
		if(a[i]){
			cout<<x[i]<<" ";
		}
	}
	cout<<endl;
	}
}
void Back_track(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			result();
		}else{
			Back_track(i+1);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
	Back_track(1);
	}
}
