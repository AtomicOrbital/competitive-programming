#include <bits/stdc++.h>
using namespace std;
string a,b;
long long M=1e9+7;
long long cd(string a,long long M){
	long long res=0;
	for(int i=0;i<a.length();i++){
		res=(res*10+a[i]-'0')%M;
	}
	return res;
}
long long mu(long long a,long long b,long long M){
	long long res=0;
	if(b==1) res = a;
	else{
		res=mu(a,b/2,M);
		res=(res*res)%M;
		if(b%2!=0) res=(res*a)%M;
	}
	return res;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>a>>b;
		long long tmp1 = cd(a,M);
		long long tmp2 = cd(b,M-1);
		cout<<mu(tmp1,tmp2,M)<<endl;	
	}
}

