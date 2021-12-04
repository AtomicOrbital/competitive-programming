#include<bits/stdc++.h>
using namespace std;

// Input #1 
// 2
// a-(b+c)
// a-(b-c-(d+e))-f

// Output #1 
// a-b-c
// a-b-c-d+e-f

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack <char> st;
		string s2="";
		st.push('+');
		for(int i=0;i<s.size();i++){
			if(s[i] == '('){
				char top = st.top();
				for( i = i+1;i<s.size();i++){
					char tmp = s[i];
					if(s[i] == ')') break;
					if(s[i]=='('){
						i=i-1;break;
					}
					if(top == '-' && (s[i]=='+'||s[i]=='-')){
						if(s[i] =='+') tmp ='-';
						if(s[i]=='-') tmp= '+';
						st.push(tmp);
						s2 = s2+tmp;
						
					}
					else if(top=='+'&&(s[i]=='+'||s[i]=='-')){
						st.push(s[i]);
						s2 = s2 + s[i];
					}
					else{
						s2 = s2 + s[i];
					}
				}
			}
			
			else if(s[i]=='+' ||s[i]=='-'){
				st.push(s[i]); 
				s2+=s[i];
			}
			else{
				s2+=s[i];
			}
		
		}
		for(int i=0;i<s2.size();i++){
			if(s2[i] != '(' && s2[i] != ')') cout<<s2[i];
		}
		cout<<endl;
	}
	return 0;
}