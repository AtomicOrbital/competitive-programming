#include<bits/stdc++.h>
using namespace std;
int sumOdd(long long n){
	long long tmp=(n+1)/2;
	long long sum=tmp*tmp;
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		long long b;
		cin>>a>>b;
		if(a==b && a%2==0) cout<<0<<endl;
		else if(a==b && a%2==1) cout<<a<<endl;
		else cout<<sumOdd(b)-sumOdd(a-1)<<endl;
	}	
	return 0;
}
