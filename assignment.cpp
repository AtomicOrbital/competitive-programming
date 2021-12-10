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

	bool isGreater(string s1,string s2){
	if(s1.length()<s2.length()) return false;
	else if(s1.length()==s2.length()){
		for(long long i=0;i<s1.length();i++)
			if(s1[i]<s2[i]) return false;	
			else if(s1[i]>s2[i]) return true;
		}
	return true;	
	}
	
	string bigMultiply(string s1,string s2){
		string kq;
		if(!isGreater(s1,s2)==false) swap(s1,s2);
		for(int i=0;i<s1.length()+s2.length();i++) kq.push_back(0);
		int i,j,tmp=0;
		for(i=s1.length()-1;i>=0;i--){                 //      9  9
			for(j=s2.length()-1;j>=0;j--){             //      9  9
				kq[i+j+1]+=(s1[i]-'0')*(s2[j]-'0')+tmp;// 0  0  9  1
				tmp=kq[i+j+1]/10;                      // 0  0  0  0
				kq[i+j+1]%=10;              
			}
			kq[i+j+1]+=tmp;
			tmp=0;                                 
		}
		if(kq[0]==0) kq.erase(kq.begin());
		for(int i=0;i<kq.length();i++)	kq[i]+='0';
		return kq;
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
