#include<bits/stdc++.h>
using namespace std;
// Input  
// 1
// 875*+9-

// Output  
// 34

int calculate(int a,int b,char x){
	if(x == '+') return a+b;
	if(x == '-') return a-b;
	if(x == '*') return a*b;
	if(x == '/') return a/b;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int>st;
		for(int i=0;i<s.size();i++){
			if((s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') == 0) st.push(s[i]-'0');
			else{
				int str1=st.top();st.pop();
				int str2=st.top();st.pop();
				int tmp=calculate(str2,str1,s[i]);	
				st.push(tmp);
			}
		}
		cout<<st.top()<<endl;
	}
	return 0;
}