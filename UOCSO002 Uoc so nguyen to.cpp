#include<bits/stdc++.h>
using namespace std;
long long sieve(long long n){
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n;
	cin>>n;
	int count=0;
	for(int i=2;i<=n;i++){
		if(n%i==0&&sieve(i)){
			count++;
		}
	}	
	cout<<count<<endl;
}
	return 0;
}
