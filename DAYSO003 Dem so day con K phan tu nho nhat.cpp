#include<bits/stdc++.h>
using namespace std;
int arr[100],n,k;
long long c[33][33];
void init(){
	for(int i=0;i<=32;i++){
		for(int j=0;j<=i;j++){
			if(i==0||i==j){
				c[i][j]=1;
			}else{
				c[i][j]=c[i-1][j]+c[i-1][j-1];
			}
		}
	}
}
void solve(){
	sort(arr,arr+n);
	int num=arr[k-1];
	int y=0;
	for(int i=k-1;i>=0;i--){
		if(arr[i]==num){
			y++;
		}
	}
	int countX=y;
	for(int i=k;i<n;i++){
		if(arr[i]==num)
			countX++;
	}
	cout<<c[countX][y]<<endl;
}
int main(){
	int t;
	cin>>t;
	init();
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		solve();
	}
	return 0;
}
