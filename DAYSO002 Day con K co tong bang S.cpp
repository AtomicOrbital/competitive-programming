#include<bits/stdc++.h>
#define fast_io  ios_base::sync_with_stdio(false);   cin.tie(0); cout.tie(0);
using namespace std;
//su dung quay lui nhi phan
//o mot tri nao do vi du 01010 tai vi tri 1 cong tong va dem so 1
//neu tong =s thi so so 1 bang k va tang bien dem
int n,k,S;
int x[100],a[100];
void Try(int i,int &count){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			int sum=0;
			int dem=0;
			for(int h=0;h<=n;h++){
				if(x[h]){
					sum+=a[h];
					dem++;
				}
			}
			if(sum==S&&dem==k) count++;
		}
		else Try(i+1,count);
	}
}
int main(){
	fast_io;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k>>S;
		for(int i=1;i<=n;i++) cin>>a[i];
		int count=0;
		Try(1,count);
		cout<<count<<endl;
	}
	return 0;
}


