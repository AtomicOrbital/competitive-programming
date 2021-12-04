#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
void FileIO(){
	freopen("input.text","r",stdin);
	freopen("output.text","w",stdout);
}
long long binomialCoefficient(unsigned int n,unsigned int k){
	long long c[50+1][50+1]={0};
	for(int i=0;i<=n;i++){
		for(int j=0;j<=min(n,k);j++){
			if(j==0||j==i)
				c[i][j]=1;
			else
				c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}
	return c[n][k];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	FileIO();
	int t;
	cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
		cout<<binomialCoefficient(n-1,k-1)<<endl;
	}
	return 0;
}
