#include<bits/stdc++.h>

using namespace std;

long long nt(int i){
	if(i<2) return 0;
	else if(i<=3) return 0;
	else if(i%2==0||i%3==0) return 0;
	else{
		for(int j=5; j<=sqrt(i); j+=6)
			if(i%j==0||i%(j+2)==0) return 0;
		return 1;
	}
}
bool test(int n){
	while(n>0){
		int r = n%10;
		if(r==1||r==0||r==4||r==6||r==8||r==9) return false; 
		n/=10;
	} 
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;cin>>n;
		int dem = 0;
		if(n<2) dem==0;
		else if(n==2) dem=1;
		else if(n==3||n==4) dem=2;
		else{
			dem=2;
			for(int i=5;i<=n;i+=6){
				if(test(i)) 
					if(nt(i)) 
						dem++;
				if(test(i+2))
					if(nt(i+2)) dem++;
			}
		}
		cout<<dem<<endl;
	}
   	return 0;
}
