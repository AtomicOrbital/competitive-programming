#include<bits/stdc++.h>
using namespace std;
//chú ý:string(1,s[i]):chuyển ký tự s[i] thành một ký tự
// Input #1 
// 2
// abc++
// ab*c+

// Output #1 
// (a+(b+c))
// ((a*b)+c) 

//Nếu s[i] không phải toán tử st.push() còn nếu phải toán tử thì ta lấy 2 cái string đầu trong stack
// và cùng toán tử tạo thành biểu thức
//cuối cùng gộp biểu thức đấy thành một string đưa vào stack khi đó string lại coi như một toán hạng lớn

// Chỉ số   Chuỗi	  Stack
//	  0       a        q
//    1       b        a b 
//    2       *       (a * b)
//    3       c       (a * b) c
//    4       +       (a * b) + c(result)
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack <string> st;
		for(int i=0;i<s.size();i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
				string str1 = st.top();st.pop();
				string str2 = st.top();st.pop();
				string res = "(" + str2 + s[i] + str1 + ")";
				st.push(res);
			}
			else st.push((string(1,s[i])));
		}
		cout<<st.top()<<endl;
	}
	return 0;
}
