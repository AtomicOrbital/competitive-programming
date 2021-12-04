#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unsigned long long dp[n+1];
		memset(dp,0, sizeof(dp));
	    dp[0]=1;
	    for(int i=1;i<n;i++){
	        for(int j=i;j<=n;j++){
	            dp[j]=(dp[j]+dp[j-i])%MOD;
	        }
    	}
		cout<<dp[n]<<endl;
	}
	return 0;
}
