#include<bits/stdc++.h>

using namespace std;
bool test(long long tmp){
	while(tmp>0){
		int  r =tmp%10;
		if(r==2||r==3||r==5||r==6||r==7||r==8) return false;
		tmp/=10;
	}
	return true;
}

int main(){
	freopen("input.text","r",stdin);
	freopen("output.text","w",stdout);
	int t;
	cin >> t;
	while(t--){
		int k;cin>>k;
		if(k==1) cout<<1<<endl;
		else if(k%2==1) cout<<(long long)pow(10,k-1)<<endl;
		else{
			int x = ceil(sqrt(pow(10,k-1))),y=ceil(sqrt(pow(10,k))),ok=0;
			while(x<y){
				long long tmp = pow(x,2);
				if(test(tmp)){
					ok=1;
					cout<<tmp<<endl;break;
				}
				x+=1;
			}
			if(ok==0) cout<<"-1"<<endl;					
		}
	}
   	return 0;
}
