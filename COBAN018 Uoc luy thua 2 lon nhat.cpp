#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	long long n;cin>>n;
		if(n%2==1) n=n-1;
		long long sum=0;
		while(n>1){
			n/=2;
			sum+=n;
		}
		cout<<sum<<endl;
	}
	return 0;
}
