#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>result;
		result.push_back(1);
		int carry;
		for(long long i=2;i<=n;i++){
			for(long long j=0;j<result.size();j++){
				long long temp=carry+result[j]*i;
				carry=temp/10;
				result[j]=temp%10;
			}
			while(carry){
				result.push_back(carry%10);
				carry/=10;
			}
		}
		for(long long i=result.size()-1;i>=0;i--){
				cout<<result[i];
		}
		cout<<endl;
	}
	return 0;
}
