#include <bits/stdc++.h>
using namespace std;
int nCrModp(int n, int r, int p){
	if (r > n - r)
		r = n - r;
	int C[r + 1];
	memset(C, 0, sizeof(C));
	C[0] = 1; 
	for (int i = 1; i <= n; i++) {
		for (int j = min(i, r); j > 0; j--)
			C[j] = (C[j] + C[j - 1]) % p;
	}
	return C[r];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,r,p;
		cin>>n>>r>>p;
		cout<<nCrModp(n, r, p)<<endl;
	}	
	return 0;
}

