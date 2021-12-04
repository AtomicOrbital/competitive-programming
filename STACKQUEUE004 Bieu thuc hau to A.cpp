#include<bits/stdc++.h>
#define MAX	100000
using namespace std;
//xét biểu thức từ trái sang phải
//Nếu ký tự được quét là toán hạng thì xuất ra
//ngăn xếp chứa dấu '(' hãy đẩy nó>Nếu gặp dấu ngoặc đơn dừng lại ở đó và đẩy toán tử đã quét vào ngăn xếp
//Nếu gặp dấu ngoặc '(' hãy bật ngăn xếp và xuất ra cho đến khi gặp '(' và loại bỏ dấu ngoặc đơn
int precedenceOperators(char s){
	if(s == '^') return 3;
	else if(s == '*' || s == '/') return 2;
	else if(s == '+' || s == '-') return 1;
	else return 0;
}

string convertInfixToPostfix(string s){
	stack<char> st;
	string res="";
	 //a+b*(c^d-e)^(f+g*h)-i
	for(int i=0;i<s.size();i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			res+=s[i];//a//b//c//d
		}
		else if(s[i] == '('){
			st.push(s[i]);
		}
		else if(s[i] == ')'){
			while(st.top()!='('){
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && precedenceOperators(s[i]) <= precedenceOperators(st.top())){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);//+//*//^
		}
	}
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	return res;
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
		cout<<convertInfixToPostfix(s)<<endl;
	}
	return 0;
}