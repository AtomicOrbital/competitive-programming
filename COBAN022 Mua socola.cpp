#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,m;cin>>x>>y>>m;
		int tmp=m/x;
		tmp=tmp+(tmp-1)/(y-1);
		cout<<tmp<<endl;
		}
   	return 0;
}
