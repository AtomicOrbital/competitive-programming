#include<bits/stdc++.h>
using namespace std;
long long sumDivisors(long long n){
			long long sum=1;
			for(long long i=2;i<=sqrt(n);i++){
				if(n%i==0){
					int j=n/i;
					if(i==j){ // kiem tra so chinh phuong
						sum+=i;
					}else{
						sum+=i+j;
					}
				}
			}
	return sum;
}
bool compare(long long x,long long y){
	if(sumDivisors(x)!=y) return false;
	return (sumDivisors(x)==y);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y;
		cin>>x>>y;
		if(compare(x,y)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
