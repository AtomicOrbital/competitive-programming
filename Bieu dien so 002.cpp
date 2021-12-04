#include <bits/stdc++.h>
using namespace std;

unsigned long long countWays(unsigned long long n, unsigned long long m){
	unsigned long long dp[m + 1][n + 1];
	for (unsigned long long i = 0; i <= n; i++) {
		dp[1][i] = 1;
	}

	unsigned long long sum;

	for (unsigned long long i = 2; i <= m; i++) {
		for (unsigned long long j = 0; j <= n; j++) {
			sum = 0;
			for (unsigned long long k = 0; k <= j; k++) {
				sum += dp[i - 1][k];
			}
			dp[i][j] = sum;
		}
	}
	return dp[m][n];
}

int main(){
	int t;cin>>t;
	while(t--){
		unsigned long long N ,K;cin>>N>>K;
		cout << countWays(N, K)<<endl;
	}	
	return 0;
}

