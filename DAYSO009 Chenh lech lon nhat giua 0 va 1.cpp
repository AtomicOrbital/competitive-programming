#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int currmax=0;
		int max=-1;
		for(int i=0;i<s.length();i++){
			if(s[i]=='0') // neu ki tu hien tai la 0
				currmax++; // tang muc chenh lech hien tai
			else 
				currmax--;// giam muc chenh lech hien tai
			if(currmax<0) currmax=0;//neu la am loai bo toi da chuoi con
			if(currmax>max) max=currmax;//cap nhat lai gia tri
		}
		if(max==0) cout<<"-1"<<endl;
		else cout<<max<<endl;
	}
	return 0;
}


