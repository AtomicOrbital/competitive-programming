#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a=1,b=2,c=3;
		while(n>0){
			a=b;
			b=c;
			c=a+b;
			n=n-(c-b-1);
		}
		n=n+(c-b-1);
		cout<<b+n<<endl;
	}
	return 0;
}


