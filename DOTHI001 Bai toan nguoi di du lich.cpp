#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> ans;

int m, n, A,B,C;
vector<pair<int,int>> a[25];
vector<bool> visited(25);
unordered_map< vector<bool>, int> F[25];

int dl(int u, int cnt){
	if (cnt==n+1) return 0;
	
	if (F[u].count(visited)) return F[u][visited];
	
	int r= 1000111000;
	for(auto p:a[u]){
		int v= p.first, c= p.second;
		
		if (not visited[v])	
		if ((v==1 && cnt==n) || v!=1){ 
			visited[v]= true;
				r= min(r, dl(v, cnt+1) + c);	
			visited[v]= false;
		}
	}
	
	return F[u][visited]= r;
}

int main(){	
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> A>>B>>C;	
		a[A].push_back(ans(B, C));		
	} 
	cout<<dl(1, 1);
}
