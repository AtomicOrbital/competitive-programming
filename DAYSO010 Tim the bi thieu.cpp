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
		unordered_map<long long,long long>res;
		long long x;
		for(int i=0;i<N-1;i++){
			cin>>x;
			res[x]++;
		}
		for(int i=L;i<L+N;i++){
			if(res[i]==0){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}



