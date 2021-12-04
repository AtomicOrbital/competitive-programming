#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+1],ok=1,d;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i == 1) d = a[1] - a[0];
			if(i >= 2 && ok == 1){
			if(a[i] - a[i-1] != d) ok=0;
		}
	}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
