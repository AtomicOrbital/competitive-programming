#include <bits/stdc++.h>
using namespace std;
#define MAX 1000111
int n, k, a[MAX];
bool b[MAX];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
    	int ok=1;
    	cin >> n >> k;
    	memset(b,false,sizeof(b));
    	for(int i=1;i<=n;i++) a[i]=i;
    	for(int i=1;i<=n;i++){
    		if(b[i] == false && i+k <= n){
    			b[i]=true;
    			b[i+k]=true;
    			swap(a[i],a[i+k]);
			}
			if(i+k > n && b[i] == false){
				cout<<-1;ok=0;break;
			} 
		}
		if(ok==1){
			for(int i=1;i <= n;i++){
			if(b[i] == true){
				cout<<a[i]<<" ";
			}
		}
	}
		cout<<endl;
	}
	return 0;
}
