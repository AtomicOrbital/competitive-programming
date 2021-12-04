#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long N,L;
		cin>>N>>L;
		unsigned long long sum=0;
		unsigned long long tmp=N*(2*L+N-1)/2;
		for(int i=0;i<N-1;i++){
			int ai;
			cin>>ai;
			sum+=ai;
		}
		cout<<(tmp-sum)<<endl;
	}
	return 0;
}



