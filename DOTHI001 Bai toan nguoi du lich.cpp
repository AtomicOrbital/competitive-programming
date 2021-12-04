#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> A;
int ans = INT_MAX, n,m, min_dis = INT_MAX,tmp=0; 
bool v[100] = {}; 
void backTrack(int x, int count){
	for(int i=2; i<=n; i++){
		if(v[i]) continue; 
		tmp+= A[x][i]; 
		v[i] = true; 
		if(count == n){
			ans = min(ans, tmp+ A[i][1]);
		}
		else if(tmp+ min_dis < ans && count < n) backTrack(i, count + 1);
		v[i] = false;
		tmp -= A[x][i];
	}
}
void slove(){
	cin >> n>>m;
	A.resize(n + 1, vector<int>(n + 1));
	int a,b,c;
	for(int i=1; i<=m; i++){
		cin>>a>>b>>c;
		A[a][b] = c;
	}		
	v[1] = true;
	backTrack(1, 2);
	cout << ans << endl;
}
int main(){
	slove();
	return 0;
}
