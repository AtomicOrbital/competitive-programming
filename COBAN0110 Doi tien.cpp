#include<bits/stdc++.h>
using namespace std;
// Input  
// 2
// 70
// 121

// Output  
// 2
// 3

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		int N;cin>>N;
		int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int dem=0;
		while(N>0){
			for(int i=9;i>=0;i--){
				if(N >= a[i]){
					while(N >= a[i]){
						dem += N/a[i];
						N = N % a[i];
					}
				}
			}
			cout<<dem<<endl;
		}
	}	
	return 0;
}