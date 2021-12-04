#include<bits/stdc++.h>
using namespace std;
long long sieve(int n){
	for(int i=2;i<=sqrt(n);i++){
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
		int n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
		}else{
			int dem=0;
			for(int i=2;i<=sqrt(n);i++){
				if((n%i==0)&&sieve(i)){
					dem++;
					while(n%i==0){
						n=n/i;
					}
				}
			}
			if(n>1) dem++;
			cout<<dem<<endl;
		}	
	}
	return 0;
}
