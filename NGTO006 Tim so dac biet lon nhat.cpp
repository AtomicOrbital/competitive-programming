#include <bits/stdc++.h>
using namespace std;
bool nt(long long i){
	if(i<2) return 0;
	if(i==2||i==3) return 1;
	if(i%2==0||i%3==0) return 0;
	for(int j=5;j<=sqrt(i);j+=12){
		if(i%j==0) return false;
		if(i%(j+2)==0) return false;
		if(i%(j+6)==0) return false;
		if(i%(j+8)==0) return false;
	}
	return true;
}
long long solve(long long n){
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
		return max;
}

int main(){
	int t;cin>>t;
	while(t--){
	long long n,tmp=1;cin>>n;
	for(long long i = n;i>=2;i--){
		if(nt(i)){
			tmp=i;
			break;
		}
		else{
			long long x = solve(i);
			if(x>sqrt(n)){
				tmp = i;break;
			}
		}
	}
	cout<<tmp<<endl;
	
	}
	return 0;		
}
