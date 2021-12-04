#include <bits/stdc++.h>
using namespace std;
unsigned long long countWays(unsigned long long n, unsigned long long m){	
	unsigned long long dp[m + 1][n + 1];
	for (unsigned long long i = 0; i <= n; i++) {
		dp[1][i] = 1;
		if (i != 0) {
			dp[1][i] += dp[1][i - 1];
		}
	}
	for (unsigned long long i = 2; i <= m; i++) {
		for (unsigned long long j = 0; j <= n; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = dp[i - 1][j];
				if (i == m && j == n) {
					return dp[i][j];
				}
				dp[i][j] += dp[i][j - 1];
			}
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		unsigned long long N ,K;cin>>N>>K;
		cout << countWays(N, K)<<endl;
	}	
	return 0;
}

