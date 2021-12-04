#include<bits/stdc++.h>
using namespace std;
// Input  
// 3
// 0 1 1
// 1 0 1
// 1 1 0

// Output  
// 2 3
// 1 3
// 1 2
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;cin>>n;
	vector<int> ke[n+1];
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]==1) ke[i].push_back(j+1);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<ke[i].size();j++) cout<<ke[i][j]<<" ";
		cout<<endl;
	}	
	return 0;
}