#include<bits/stdc++.h>
using namespace std;
string res="0123456789ABCDEF";
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		long long n;cin>>n;
		if(n==0) cout<<0<<endl;
		else {
			string tmp ="";
			while(n>0){
				tmp = res[n%16] + tmp;
				n /= 16;
		}
		cout<<tmp<<endl;
		}
	}
   	return 0;
}
