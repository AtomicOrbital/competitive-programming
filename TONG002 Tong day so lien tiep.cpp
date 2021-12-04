#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long l;
		long long r;
		cin>>l>>r;
		long long result=((r*(r+1))/2)-((l*(l-1))/2);
		cout<<result<<endl;
	}
	return 0;
}
