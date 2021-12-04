#include<bits/stdc++.h>
using namespace std;
long long nt(long long n){
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
long long test(long long n){
	for(long long i=2;i<=sqrt(n);i++){
				if((n%i==0)&&nt(i)){
					int dem=0;
					while(n%i==0){
						dem++;
						n/=i;
						if(dem>1) return true;
					}
				}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;cin>>n;
		if(n==1 or nt(n)) cout<<"NO"<<endl;
		else{
			if(test(n)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
   	return 0;
}
