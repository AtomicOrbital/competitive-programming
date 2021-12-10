#include <bits/stdc++.h>
using namespace std;
class Solution {
	private:
		string s1;
		string s2;
  	public:

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
	
	string bigMultiply(string s1,string s2){
		if((s1[0]=='0' && s1.length()==1) || (s2[0]=='0'&& s2.length()==1))
      	return "0";
      	int neg=0;
      	if(s1.at(0) == '-'){
        	s1 = s1.substr(1);
        	neg++;
     	}
      	if(s2.at(0) == '-'){
        	s2 = s2.substr(1);
        	neg--;
      	}

      	int n=s1.size(),m=s2.size();
      	vector<int> ans(n+m,0);
      	string final="";
      	int carry,place,place_i,place_j;
      	for(int i=m-1;i>=0;i--){
          	carry=0;
          	place_i= m-1-i;
          	int digit_i = s2[i]-48;
          	for(int j=n-1;j>=0;j--){
              	place_j = n-1-j;
              	place = place_i + place_j;
             	int digit_j=s1[j]-48;
              	int product = digit_i * digit_j;
              	product+=ans[place]+carry;
              	ans[place]=product%10;
              	carry = product/10;
          	}
          	if(carry!=0){
               ans[place+1]=carry;
          	}
      	}

      	if(carry!=0){
          ans[place+1]=carry;
          place++;
      	}
      	for(int i=place;i>=0;i--)
          	final+=(char)(ans[i]+48);
  
     	int i=0;
      	while(final[i]=='0')
          	i++;
      	final = final.substr(i);
      	if(neg!=0)
          	final = "-"+final;
      	return final;
	}
};
int main() {
	freopen("bignumber.in","r",stdin);
	freopen("bignumber.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string x;
        getline(cin,x);
        stringstream ss(x);
        string y;
        vector<string>res;
        while(ss>>y){
        	res.push_back(y);
		}
		Solution ob;
		if(res[1]=="+") cout <<ob.bigSum(res[0],res[2])<<endl;
        else cout<<ob.bigMultiply(res[0],res[2])<<endl;
    }
    return 0;
}
