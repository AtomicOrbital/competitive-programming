#include<bits/stdc++.h>
#define rep(i,_n) for(int i=0;i<_n;i++)
using namespace std;
#define MXN 55
int arr[MXN];
int dp[MXN][MXN*MXN];

int main() {
    //code
    int t,N,c;
    cin>>t;
    while(t--){
        rep(i,MXN) fill(dp[i], dp[i]+MXN*MXN, 0);

        cin>>N;
        rep(i,N) cin>>arr[i];
        int sum = accumulate(arr, arr+N, 0);
        dp[0][0] = 1;
        for(int i=1; i<=N; i++)
            for(int j=sum; j>=0; j--)
                dp[i][j] += (dp[i-1][j] + (j>=arr[i-1] ? dp[i-1][j-arr[i-1]] : 0));

        int res = sum;

        for(int i=0; i<=sum/2; i++)
            if(dp[N][i]) res = min(res, abs(i - (sum-i)));

        cout<<res<<endl;
    }
    return 0;
}
