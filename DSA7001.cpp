#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int x;
    vector<int>v;
    while(cin>>s){
        if(s=="push"){
            cin>>x;
            v.push_back(x);
        }
        else if(s=="pop"){
            if(!v.empty()){
                v.pop_back();
            }
        }
        else if(s=="show"){
            if(v.empty()){
                cout<<"empty"<<endl;
            }else{
                for(int x:v){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
        }
    }

}