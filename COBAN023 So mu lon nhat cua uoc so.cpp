#include<bits/stdc++.h>
using namespace std;
int solve(int n,int p){
	int dem=0;
	for(int i=p;i<=n;i+=p){
		int tmp=i;
		while(tmp%p==0){
			dem++;
			tmp/=p;
		}
	}
	return dem;
}
int main(){
//	ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
		int n,p;
		cin>>n>>p;
		cout<<solve(n,p)<<endl;
	}
	return 0;
}

