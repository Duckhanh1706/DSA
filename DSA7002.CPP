#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    stack<int>st;
    while(t--){
        string s;
        int x;
        cin>>s;
            if(s=="PUSH"){
                cin>>x;
                st.push(x);
            }
            else if(s=="POP"){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(s=="PRINT"){
                if(st.empty()){
                    cout<<"NONE"<<endl;
                }
                else{
                    cout<<st.top();
                cout<<endl;
                }
            }
        }
    }
