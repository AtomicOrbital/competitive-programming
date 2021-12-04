#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int t;cin>>t;
    long long F[35]={0};
    unordered_map<int,int> a;
    F[0]=0;F[1]=1;
    a[F[0]]=1;a[F[1]]=1;
    for(int i=2;i<35;i++){
    	F[i] = F[i-1] + F[i-2];
    	a[F[i]] = 1;
	}
	while(t--){
		int n;cin>>n;
		int ok=0;
		for(int i=0;i<35;i++){
			if(a[F[i]] == 1 && a[n-F[i]] ==1){
				ok=1;
				cout<<F[i]<<" "<<n-F[i]<<endl;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
    
}