#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long n=s.length()-1,tmp=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				tmp+=(long long)pow(2,n);
			}
			n--;
		}
		cout<<tmp<<endl;
	}
	return 0;
}
