#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;cin>>n;
		int a[n+5],dem=0,ok=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) dem++;
			else if(a[i]==0) ok=0;
		} 
		if(ok==0) cout<<"-1"<<endl;
		else{
			if(dem==0||dem==n) cout<<"0"<<endl;
			else{
				int x=min(dem,n-dem);
				cout<<x<<endl;
			}
		}
	}
   	return 0;
}
