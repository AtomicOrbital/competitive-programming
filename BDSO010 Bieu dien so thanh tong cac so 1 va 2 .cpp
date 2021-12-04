#include <bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
void multiply(unsigned long long F[2][2],unsigned long long M[2][2])
{
	unsigned long long x = (F[0][0]*M[0][0] + F[0][1]*M[1][0])%MOD;
	unsigned long long y = (F[0][0]*M[0][1] + F[0][1]*M[1][1])%MOD;
	unsigned long long z = (F[1][0]*M[0][0] + F[1][1]*M[1][0])%MOD;
	unsigned long long w = (F[1][0]*M[0][1] + F[1][1]*M[1][1])%MOD;

	F[0][0] = x%MOD;
	F[0][1] = y%MOD;
	F[1][0] = z%MOD;
	F[1][1] = w%MOD;
}

void power(unsigned long long F[2][2],unsigned long long n)
{
	if( n == 0 || n == 1) return;
	unsigned long long M[2][2] = {{1,1},{1,0}};

	power(F, n/2);
	multiply(F, F);

	if (n%2 != 0) multiply(F, M);
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		unsigned long long F[2][2] = {{1,1},{1,0}};
		if (n == 0) return 0;
		power(F, n);
		cout<< F[0][0]%MOD<<endl;
	}
	return 0;
}

