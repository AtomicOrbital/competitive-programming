#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
		}else{
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
			cout<<sum<<endl;
		}
	}
	return 0;
}
