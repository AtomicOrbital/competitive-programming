#include<bits/stdc++.h>
using namespace std;
string res="01";
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long n;cin>>n;
		while(n!=0){
			s=res[n%2]+s;
			n=n/2;
		}
		cout<<s<<endl;
	}
	return 0;
}
