#include<bits/stdc++.h>
using namespace std;
//Input #1 
//2
//10 0.0
//2 1
//Output #1 
//0.000
//1.333
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,sum=0;
		float x,sum1=0.0,tmp=1.0;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			tmp*=x;
			sum+=i;
			sum1+=tmp/sum;
		}
		cout<<fixed<<setprecision(3)<<sum1<<endl;
	}
	return 0;
}
