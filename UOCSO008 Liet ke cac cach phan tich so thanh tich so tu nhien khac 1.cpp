#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> res;
void Try(int i,int tich,vector<int> ans){
	if(tich>n) return;
	else if(tich==n){
		res.push_back(ans);return;
	}
	for(int j=i;j<n-1;j++){
		int h=j+1;
		if(tich * h<=n){
			ans.push_back(h);
			Try(j,tich * h,ans);
			ans.pop_back();
		}
	}
}

void in(){
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		int x=res[i].size();
		for(int j=0;j<x;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		vector<int> ans;
		if(n==1) cout<<0<<endl;
		else{
			Try(1,1,ans);
			in();
			res.clear(),ans.clear();
		}
	}
}
