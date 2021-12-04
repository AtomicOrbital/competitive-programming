#include <bits/stdc++.h>
using namespace std;
bool nt(long long i){
	if(i<2) return 0;
	if(i==2||i==3) return 1;
	if(i%2==0||i%3==0) return 0;
	for(int j=5;j<=sqrt(i);j+=2){
		if(i%j==0) return false;
	}
	return true;
}
long long solve(long long n){
	long long res;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}
	if(n>1) res=n;
	return res;
}

int main(){
	int t;cin>>t;
	while(t--){
	long long r,n,tmp=2;cin>>r>>n;
	for(long long i = n;i>=r;i--){
		if(nt(i)){
			tmp = max(tmp,i);
			break;
		}
		else{
			tmp = max(tmp,solve(i));
		}
	}
	cout<<tmp<<endl;
	
	}
	return 0;		
}
