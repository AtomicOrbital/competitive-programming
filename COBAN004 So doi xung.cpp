#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n<=2){
			cout<<"9"<<endl;
		}else{
			long long tmp=9;
			for(int i=1;i<n/2;i++){
				tmp*=10;
			}
			if(n%2==1) tmp*=10;
			cout<<tmp<<endl;
		}
	}
	return 0;
}
