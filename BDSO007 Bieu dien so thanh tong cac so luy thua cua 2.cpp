#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
void FileIO(){
	freopen("input.text","r",stdin);
	freopen("output.text","w",stdout);
}
long long power(long long a,long long b){
	if(b==0) return 1;
	long long x=power(a,b/2);
	if(b%2==1)
		return a*x*x;
	else
		return x*x;
}
int getcount(int m,int k){
		if(m==0) return 1;
		if(k==0) return 1;
		if(m>=power(2,k)) return getcount(m-power(2,k),k)+getcount(m,k-1);
		else return getcount(m,k-1);
}
int main(){
	// FileIO();
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int m=0;
		while(cin>>m){
			int k=log2(m);
			cout<<getcount(m,k)<<endl;
		}
	}
	return 0;
}