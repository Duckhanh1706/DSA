#include<bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string>res;
void init(){
    cin>>n;
    cin>>s;
}
void Try(int i,string a){
    for(int j=0;j<=1;j++){
        if(j==1) a.push_back(s[i]);
        if(i==n-1){
            if(s!=""){
                res.push_back(a);
            }
        }
        else Try(i+1,a);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        res.clear();
        Try(0,"");
        sort(res.begin(),res.end());
        for(string i:res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}