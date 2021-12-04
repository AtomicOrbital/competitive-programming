#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long min = sqrt(a);
		if(min*min!=a){
			min+=1;
		}
		long long max=sqrt(b);
		cout<<max-min+1<<endl;
	}
	return 0;
}
