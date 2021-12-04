#include<bits/stdc++.h>
#define MAX	100000
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string s;
	getline(cin,s);
	stringstream ss(s);
	string w;
	std::vector<string> v;
	while(ss>>w){
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++){
		for(int j = v[i].size()-1;j>=0;j--){
			cout<<v[i][j];
		}
		cout<<" ";
	}
	cout<<endl;
	return 0;
}