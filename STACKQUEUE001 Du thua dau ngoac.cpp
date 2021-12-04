#include<bits/stdc++.h>
#define MAX	100000
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char>a;
		bool ok;
		for(int i=0;i<s.size();i++){
			if(s[i]==')'){
				ok=true;
				char top=a.top();
				a.pop();
				while(top!='('){
					if(top == '+'|| top == '-' || top == '*' || top == '/'){
						ok=false;
					}
					top=a.top();
					a.pop();
				}
				if(ok) break;
			}
			else a.push(s[i]);
		}
		if(ok) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}