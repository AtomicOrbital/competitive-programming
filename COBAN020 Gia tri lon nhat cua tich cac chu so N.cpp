#include<bits/stdc++.h>
using namespace std;
long long find(long long n){
	if(n==0) return 1;
	if(n<10) return n;
	return max((find(n/10)*(n%10)),find(n/10-1)*9);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<find(n)<<endl;
	}
	return 0;
}

