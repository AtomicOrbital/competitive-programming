#include <bits/stdc++.h>
using namespace std;
int init(int a[],int m,int n){
	if(n==0) return 1;
	if(n<0) return 0;
	if(m<=0 && n>=1) return 0;
	return init(a,m-1,n) + init(a,m,n-a[m-1]);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int t;cin>>t;
    int a[30]={0};
    for(int i=1;i<23;i++){
    	a[i-1]=i*i;
	}
	while(t--){
		int n;cin>>n;
		int m;
		for(int i=22;i>=0;i--){
			if(n>=a[i]){
				m=i;break;
			}
		}
		cout<<init(a,m,n)<<endl;
	}
    return 0;
}