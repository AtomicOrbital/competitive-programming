#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
long long powmod(long long a,long long b){
	if(b==0) return true;
	long long x=powmod(a,b/2);
	if(b%2==1)
		return a*(x*x % MOD)%MOD;
	else
		return x * x % MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		long long b;
		cin>>a>>b;
		cout<<powmod(a,b)<<endl;
	}
	return 0;
}
