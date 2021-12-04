#include<bits/stdc++.h>
using namespace std;
bool prime[10000001];
vector<int> res;
int n;
void init(){
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<=sqrt(1000000);i++){
		if(prime[i]){
			res.push_back(i);
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=false;
			}
		}
	}
}
int nt(int i){
	if(i<2) return 0;
	else if(i<=3) return 0;
	else if(i%2==0||i%3==0) return 0;
	else{
		for(int j=5; j<=sqrt(i); j+=6)
			if(i%j==0||i%(j+2)==0) return 0;
		return 1;
	}
}
int test(){
	for(int i=0;i<res.size();i++){
			if(n%res[i]==0){
				n=n/res[i];
				if(n%res[i]==0){
					return true;
				}
			}
	}
	int x=sqrt(n);
	while(x*x<n) x++;
	while(x*x>n) x--;
	if(x*x==n&&nt(x)) return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	init();
	while(t--){
		cin>>n;
		if(test()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
