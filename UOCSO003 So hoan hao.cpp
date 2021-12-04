#include<bits/stdc++.h>
using namespace std;
bool sieve(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}
vector<int> res;
void init(){
	for(int i=1;i<=15;i++){
		if(sieve(i)){
			long long x=pow(2,i);
			if(sieve(i)){
				long long h=x/2*(x-1);
				res.push_back(h);
			}
		}
	}
}
bool check(long long n){
	for(int i=0;i<res.size();i++){
		if(res[i]==n){
			return true;
		}
	}
	return false;
}
int main(){
//	init();
//	for(int i=0;i<res.size();i++){
//		cout<<res[i]<<endl;
//	}
	int t;
	init();
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(check(n)){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
	}
	return 0;
}
