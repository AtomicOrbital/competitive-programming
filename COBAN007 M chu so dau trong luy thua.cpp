#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//1<=n<=10^18, 0<=k<=10^3, 1<=M<=18
//Input #1 
//2
//2 5 1
//2345 3 3
//Output #1 
//3
//128
void find(long long N,long long K,long long M){
	ll firstM;
	double y=1.0*K*log10(N*1.0);
	y = y-(ll)y;
	double tmp=pow(10.0,y);
	firstM = tmp*(1LL)*pow(10, M - 1);
	cout<<firstM<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long N,K,M;
		cin>>N>>K>>M;
		find(N,K,M);
	}	
	return 0;
}
