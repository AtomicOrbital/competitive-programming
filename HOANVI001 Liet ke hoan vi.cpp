#include<bits/stdc++.h>
using namespace std;
int n;
int a[15];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin >> n; 
		for(int i=1;i<=n;i++) a[i]= i;
		do{
			for(int i=1;i<=n;i++)
				if(i<n) cout<<a[i]<<" ";
				else cout<<a[i]<<endl;
		}while(next_permutation(a+1, a+1+n));
	}
	
}
