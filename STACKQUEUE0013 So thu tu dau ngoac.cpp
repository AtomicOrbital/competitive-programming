#include<bits/stdc++.h>
using namespace std;
// Input  
// 2
// (a+b(b*c))+(d/e)
// ((())(()))

// Output 
// 1 2 2 1 3 3
// 1 2 3 3 2 4 5 5 4 1

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
		int count=1;
		for(int i=0;i<s.size();i++){
			if(s[i] == '('){
				cout<<count<<" ";
				st.push(count);
				count++;
			}
			else if(s[i] == ')'){
				cout<<st.top()<<" ";
				st.pop();
			}
		}
		cout<<endl;	
	}
	return 0;
}