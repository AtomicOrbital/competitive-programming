#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int limit;
		cin>>limit;
		int a=1;
		int b=2;
		int sum=0;
		if(limit>=2) sum+=b;
		int c=3;
		while(c<=limit){
			if(c%2==0) sum+=c;
			a=b;
			b=c;
			c=a+b;
		}
		cout<<sum<<endl;
	}
	return 0;
}



