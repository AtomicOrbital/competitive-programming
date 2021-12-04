#include<bits/stdc++.h>
using namespace std;
// muon tim so lon hon l ma chia het cho i ta có:(l-i+1/i)*i
void sieve(int l,int r){
	bool prime[r-l+1];
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=sqrt(r);i++){
		for(int j=max(i*i,(l-i+1)/i*i);j<=r;j+=i){
			prime[j-l]=false;
		}
	}
	int dem=0;
	for(int i=max(2,l);i<=r;i++){
		if(prime[i-l])
			dem++;
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		sieve(l,r);
	}
	return 0;
}
