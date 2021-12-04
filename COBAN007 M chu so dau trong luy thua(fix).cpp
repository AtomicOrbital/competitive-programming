#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void findFirstM(long long N,long long K,long long M){
	float y=1.0*K*log10(N*1.0);
	y = y-1.0*(ll)y;
	float tmp=1.0*pow(10,y);
	cout<<(long long)(tmp*pow(10,M-1))<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long N,K,M;
		cin>>N>>K>>M;
		findFirstM(N,K,M);
	}	
	return 0;
}
