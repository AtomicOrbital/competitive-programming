#include<bits/stdc++.h>
using namespace std;
long long isArmstrong(long long n){
	long long dem=0,rev=0,x=n,a=n;
	while(n!=0){
		dem++;
		n/=10;
	}
	while(x!=0){
		long long r=x%10;
		rev+=pow(r,dem);
		x/=10;
	}
	if(rev==a)
		return true;
	return false;
}
int main(){
	freopen("input.text","r",stdin);
	freopen("output.text","w",stdout);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(isArmstrong(n)) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}

