#include<bits/stdc++.h>
using namespace std;
int changeCoin(int s[],int m,int n){
	if(n==0) return 1;
	if(n<0) return 0;
	if(m<=0&&n>=1) return 0;
	return changeCoin(s,m-1,n)+changeCoin(s,m,n-s[m-1]);
}
int main(){
		int n,m;
		cin>>n>>m;
		int a[m];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		cout<<changeCoin(a,m,n);
	return 0;
}


