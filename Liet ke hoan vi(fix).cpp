#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok=1;
//khoi tao cau hinh dau tien
void init(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}

void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		int k=n;
		while(a[i]>a[k])
			k--;
		swap(a[i],a[k]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}
//in ket qua
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	cout<<" ";
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		init();
		while(ok){
			in();
			sinh();
			cout<<endl;
		}
	}
	return 0;
}



