#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;cin>>n;
		long long max=-1;
		while(n%2==0){
			max=2;
			n=n/2;
		}
		while(n%3==0){
			max=3;
			n=n/3;
		}
		for(int i=5;i<=sqrt(n);i+=12){
			if(n%i==0){
				max =i;
				while(n%i==0) n=n/i;
			}
			if(n%(i+2)==0){
				max=i+2;
				while(n%(i+2)==0) n=n/(i+2);
			}
			if(n%(i+6)==0){
				max=i+6;
				while(n%(i+6)==0) n/=(i+6);
			}
			if(n%(i+8)==0){
				max=i+8;
				while(n%(i+8)==0) n/=(i+8);
			}
		}
		if(n>4) max=n;
		cout<<max<<endl;	
	}
	return 0;
}
