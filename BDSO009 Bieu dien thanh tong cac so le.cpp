#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7,n,F[2][2],M[2][2];
void mu(long long f[2][2],long long m[2][2]){
	long long x=(f[0][0]*m[0][0]%mod+f[0][1]*m[1][0]%mod)%mod;
	long long y=(f[0][0]*m[0][1]%mod+f[0][1]*m[1][1]%mod)%mod;
	long long z=(f[1][0]*m[0][0]%mod+f[1][1]*m[1][0]%mod)%mod;
	long long t=(f[1][0]*m[0][1]%mod+f[1][1]*m[1][1]%mod)%mod;
	F[0][0]=x;F[0][1]=y;F[1][0]=z;F[1][1]=t;
}
void pow(long long f[2][2],long long n){
	if(n<=1) return;
	pow(f,n/2);mu(f,f);
	if(n&1) mu(f,M);
}
void init(){
	F[0][0]=F[0][1]=F[1][0]=1;
	F[1][1]=0;
	M[0][0]=M[0][1]=M[1][0]=1;
	M[1][1]=0;
	if(n==0) cout<<0;
	else{
		pow(F,n-1);
		cout<<F[0][0];
	}
	cout<<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
        cin>>n;
        init();
	}
   	return 0;
}
