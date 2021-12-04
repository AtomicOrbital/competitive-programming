#include<bits/stdc++.h>
using namespace std;
//Input #1 
//2
//1 1.0
//2 0
//Output #1 
//1.000
//0.000
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		float x,sum=0.0,mul=1.0;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			mul*=x;
			sum+=(float)mul;
			sum=pow(sum,0.5);
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
	}
	return 0;
}
