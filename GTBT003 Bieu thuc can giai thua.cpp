#include<bits/stdc++.h>
using namespace std;
//Input #1 
//2
//1
//2
//Output #1 
//1.000
//1.442
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long mul=1;
		float sum=0.0;
		for(long long i=1;i<=n;i++){
			mul*=i;
			sum+=(float)mul;
			sum=pow(sum,(float)1/(i+1));
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
	}
	return 0;
}
