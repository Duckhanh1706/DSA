#include<bits/stdc++.h>
 
using namespace std;


void sang(int n,string s){
	int c=1;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			c=0;
			break;
		}
	}
	if(c==1){
		for(char i:s){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
void sinh(int n,int i,string s){
	for(int j= 0;j<=1;j++){
		s[i]=j +'0';
		if(i == n-1){
			sang(n,s);
		}
		else sinh(n,i+1,s);
	}
}
int main(){
	int n;
	cin>>n;
	string s;
	s.resize(n);
	sinh(n,0,s);
}
