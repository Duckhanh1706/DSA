#include<bits/stdc++.h>
using namespace std;
int n,x;
vector<int>a;
vector<vector<int>>res;
void init(){
    cin>>n>>x;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void Try(int limit,int value,vector<int>tmp){
    if(value==x){
        res.push_back(tmp);
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=limit && value+a[i]<=x){
            tmp.push_back(a[i]);
            Try(a[i],value+a[i],tmp);
            tmp.pop_back();
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        res.clear();
        sort(a.begin(),a.end());
        Try(1,0,{});
        if(res.empty()){
            cout<<"-1"<<endl;
        }else{
            cout<<res.size()<<" ";
            for(auto i:res){
                cout<<"{";
                for(int j=0;j<i.size();j++){
                    cout<<i[j];
                    if(j!=i.size()-1){
                        cout<<" ";
                    }
                }
                cout<<"} ";
            }
        }
        cout<<endl;
    }
}