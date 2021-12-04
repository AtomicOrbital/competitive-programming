#include<bits/stdc++.h>
using namespace std;
int toNum(char c){
	return int(c-'0');
}
string bigSum(string s1,string s2){
	if(s1.length()<s2.length()) swap(s1,s2);
	int len1=s1.length();
	int len2=s2.length();
	int carry=0;
	string res="";
	for(int i=0;i<len2;i++){
		int x=toNum(s1[len1-i-1])+toNum(s2[len2-i-1])+carry;
		res=char(x%10+'0')+res;
		carry=x/10;
	}
	for(int i=len2;i<len1;i++){
		int x=toNum(s1[len1-i-1])+carry;
		res=char(x%10+'0')+res;
		carry=x/10;
	}
	if(carry==1)
		res="1"+res;
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		string s2;
		cin>>s1>>s2;
		cout<<bigSum(s1,s2)<<endl;
	}
	return 0;
}
