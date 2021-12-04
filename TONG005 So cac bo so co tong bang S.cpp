#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int k,s;cin>>k>>s;
		int dem=0;
		for(int i=0;i<=k;i++){
			for(int j=0;j<=k;j++){
				if(i+j>s) break;
				if(s-i-j<=k){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
   	return 0;
}
