#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,m;cin>>n>>m;
		if(m%n==0||n==1) cout<<0<<endl;
		else{
			long long sum=0,x;
			for(int i=2;i<=sqrt(n);i++){
				if(n%i==0){
					if(m%i!=0){
						sum+=i;
					}
					x = n/i;
					if(m%x!=0 &&x!=i) sum+=x;//m ko chia het x va x ko phai so nt
				}
			}
			sum += n;
			cout<<sum<<endl;
		}
	}
   	return 0;
}
