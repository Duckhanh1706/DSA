#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>b[i];
			m[b[i]]++;
		}
		vector<pair<int,int>> a(m.begin(),m.end());
		sort(a.begin(),a.end(),cmp);
		for(auto i:a){
			for(int j=1;j<=i.second;j++){
				cout<<i.first<<" ";
			}
		}
		cout<<endl;
	}
}
