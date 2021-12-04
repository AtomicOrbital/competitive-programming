#include<bits/stdc++.h>
#define min INT_MIN
using namespace std;
int n,m;
int maxMatrix(){
	cin>>n>>m;
	int dp[n][m+2];
	for(int i=0;i<n;i++){
		for(int j=1;j<=m;j++){
			cin>>dp[i][j];
		}
	}
	for(int i=0;i<n;i++){
		dp[i][0]=min;
		dp[i][m+1]=min;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]+=max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
		}
	}
	int result=min;
	for(int i=1;i<=m;i++)
		result=max(result,dp[n-1][i]);
	return result;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<maxMatrix()<<endl;
	}
	return 0;
}


