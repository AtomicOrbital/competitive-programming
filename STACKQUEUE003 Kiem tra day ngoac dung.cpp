#include<bits/stdc++.h>
#define MAX	100000
using namespace std;
bool checkBracket(string x){
	stack<char>s;
		for(int i=0;i<x.size();i++){
			if(x[i] == '(' || x[i] == '[' || x[i] == '{'){
				s.push(x[i]);
			}
			else if(x[i] == ')' && !s.empty() && s.top() == '(') s.pop();
			else if(x[i] == ']' && !s.empty() && s.top() == '[') s.pop();
			else if(x[i] == '}' && !s.empty() && s.top() == '{') s.pop();
			else return false;
		}
		if(s.size()!=0) return false;
		else return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		string x;
		cin>>x;
		if(checkBracket(x)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}