#include<bits/stdc++.h>
using namespace std;
bool strymetricalNumber(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1])
			return false;
	}
	return true;
}
string toNum(long long num){
	if(num==0) return 0;
	string res="";
	while(num>0){
		res+=(num%10-'0');
		num/=10;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		long long num;cin>>num;
		if(num<10) cout<<num<<endl;
		else if(strymetricalNumber(toNum(num))==true) cout<<num<<endl;
		else{		
		long long num1=num-1;
		while(strymetricalNumber(toNum(num1))==false) num1--;
		
		long long num2=num+1;
		while(strymetricalNumber(toNum(num2))==false) num2++;
		
		if(abs(num-num1)>abs(num-num2)) cout<<num2<<endl;
		else if(abs(num-num1)<abs(num-num2)) cout<<num1<<endl;
		else cout<<num1<<" "<<num2<<endl; 
	}
}
	return 0;
}

