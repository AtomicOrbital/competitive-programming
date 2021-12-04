#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;cin>>n;
		if(n<2) cout<<0<<endl;
		else {
			vector<long long>res;
			vector<int>ans;
			int dem;
			for(int i=2;i<=3;i++){
				if(n%i==0){
					res.push_back(i);
					dem=0;
					while(n%i==0){
						dem++;
						n/=i;
					}
					ans.push_back(dem);
				}
			}
			for(long long i=5;i<=sqrt(n);i+=6){
				if(n%i==0){
					res.push_back(i);
					dem=0;
					while(n%i==0){
						dem++;
						n/=i;
					}
					ans.push_back(dem);
				}
				if(n%(i+2)==0){
					res.push_back(i+2);
					dem=0;
					while(n%(i+2)==0){
						dem++;
						n/=(i+2);
					}
					ans.push_back(dem);
				}
			}
			if(n>1){
				res.push_back(n);
				ans.push_back(1);
			}
			cout<<res.size()<<endl;
			for(int i=0;i<res.size();i++){
				cout<<res[i]<<" "<<ans[i]<<endl;
			}
		}
	}
   	return 0;
}
