#include<bits/stdc++.h>
using namespace std;
long long powmod(long long a,long long b){
	if(b==0) return true;
	long long x=powmod(a,b/2);
	if(b%2==1)
		return a*x*x;
	else
		return x*x;
}
long long check(long long x,long long n,long long num=1,long long sum=0){
	long long result=0;
	long long p=powmod(num,n);
	while(p+sum<x){
		result+=check(x,n,num+1,p+sum);//kiem tra tat ca cac so lon n
		num++;
		p=powmod(num,n);
	}
	if(p+sum==x)
		result++;
	return result;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,n;
		cin>>x>>n;
		cout<<check(x,n)<<endl;
	}
	return 0;
}

