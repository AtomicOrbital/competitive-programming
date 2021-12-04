#include<bits/stdc++.h>
using namespace std;

// Input  
// 1
// 3 3
// 1 2
// 1 3
// 2 3

// Output  
// 2 3
// 1 3
// 1 2
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		int V,E;
		cin>>V>>E;
		// xây dựng vector 2 chiều lưu cạnh kề mỗi đỉnh
		std::vector<int> ke[V+1];
		for(int i=1;i<=E;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i=1;i<=V;i++){
			for(int j=0;j<ke[i].size();j++) cout<<ke[i][j]<<" ";
				cout<<endl;
		}
	}
	return 0;
}