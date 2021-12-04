#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
long long powmod(long long a,long long b){
	if(b==0) return true;
	long long x=powmod(a,b/2);
	if(b%2==1)
		return a*(x*x%MOD)%MOD;
	else
		return x*x%MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%2!=0) cout<<"-1"<<endl;
		else cout<<powmod(2,n/2-1)%MOD<<endl;
	}
	return 0;
}


