#include<bits/stdc++.h>
using namespace std;
// ý tưởng duyệt từ cuối về nếu gặp phép tính thì lấy 2 phần tử 
// dấu trong stack chính là 2 chữ ngay trước nó để tạo biểu thức
//xong push ngược biểu thức vào stack
// Input  
// 2
// *+ab-cd
// *-a/bc-/akl

// Output  
// ((a+b)*(c-d))
// ((a-(b/c))*((a/k)-l))

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack <string> st;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
				string b = st.top();st.pop();
				string c = st.top();st.pop();
				string res="(" + b + s[i] + c + ")";
				st.push(res);
			}
			else st.push((string(1,s[i])));
		}
		cout<<st.top()<<endl;
	}
	return 0;
}
