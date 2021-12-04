#include<bits/stdc++.h>
using namespace std;
//chú ý:string(1,s[i]):chuyển ký tự s[i] thành một ký tự
// Input #1 
// 2
// ab+cd-*
// abc/-ak/l-*

// Output #1 
// *+ab-cd
// *-a/bc-/akl

//Để in stack đúng biểu thức thấy cứ 2 chữ thì sau đó là một toán tử của 2 chữ => duyệt xuôi
//Nếu s[i] không phải toán tử st.push() còn nếu phải toán tử thì ta lấy 2 cái string đầu trong stack
// và cùng toán tử tạo thành biểu thức
//cuối cùng gộp biểu thức đấy thành một string đưa vào stack khi đó string lại coi như một toán hạng lớn
//Test 2
// Chỉ số   Chuỗi	  Stack
//	  0       a        a
//    1       b        a b 
//    2       c        a b c
//    3       /        a/bc
//    4       -        -a/bc
//    5       a        -a/bc a
//    6       k        -a/bc a k
//    7       /        -a/bc /ak
//    8       l        -a/bc /akl
//    9       -        -a/bc-/akl
//    10      *        *-a/bc-/akl

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
				string res = s[i] + str2 + str1;
				st.push(res);
			}
			else st.push((string(1,s[i])));
		}
		cout<<st.top()<<endl;
	}
	return 0;
}
