#include<bits/stdc++.h>
using namespace std;
// Input  
// 3
// 2 3
// 1 3
// 1 2

// Output  
// 0 1 1 
// 1 0 1 
// 1 1 0 

int a[1000][1000];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
		int n; cin >> n;
		string s;
		cin.ignore();
		for(int i=0;i<n;i++){
			getline(cin,s);
			s+=" ";
			int res=0;
			int j=0;
			while(j<s.size()){
				if(s[j] >= '0' && s[j] <= '9'){
					res = res * 10 + (int)(s[j] - '0');
				}
				else if(res>0){
					a[i][res-1] = 1;
					res = 0;
				}
				j++;
			}
		}
		for(int i=0;i<n;i++){
			for(int k=0;k<n;k++){
				cout<<a[i][k]<<" ";
			}
			cout<<endl;
		}
		
	return 0;
}