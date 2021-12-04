#include<bits/stdc++.h>
using namespace std;
long long nt(long long i){
	if(i==2||i==3) return 1;
	if(i<2) return 0;
	else if(i<=3) return 0;
	else if(i%2==0||i%3==0) return 0;
	else{
		for(int j=5; j<=sqrt(i); j+=6)
			if(i%j==0||i%(j+2)==0) return 0;
		return 1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;cin>>n;
		if(n<=2) n=3;
		for(long long i=n-2;i>0;i++){
			if(nt(i)&&nt(i+2)){
			 	cout<<i+2<<endl;
				break;	
			}
		}
	}
   	return 0;
}
