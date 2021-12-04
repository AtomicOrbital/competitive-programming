#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>res;
		res.push_back(1);
		long long r=0,q;
		for(int i=1;i<=n;i++){
			for(int j=0;j<res.size();j++){
				q =r;
				r = (res[j]*i +r)/10;
				res[j] = (res[j]*i + q)%10;
			}
			while(r){
				res.push_back(r%10);
				r/=10;
			}
		}
		for(int i=res.size()-1;i>=0;i--){
				cout<<res[i];
		}
		cout<<endl;
	}
	return 0;
}
