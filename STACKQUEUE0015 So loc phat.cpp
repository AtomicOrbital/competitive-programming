#include<bits/stdc++.h>
using namespace std;
//Ví dụ n = 2 sinh ra 11 10 01 00 1 0 đặt tại 1 là 8, 0 là 6 thì in được 88 86 68 66 8 6
//cho vào vector sắp xếp

int n,X[100],m;
vector<string> res;
vector<string>ans;
bool ok;
void sinh(int i){
	while((i>0) && (X[i]==1)) i--;
	if(i==0){
		ok=true;return;
	}
	else{
		for(int j=i;j<=n;j++)
			X[j] = 1 - X[j];
			return;
	}
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=n;i>=1;i--){
			ok=false;
			for(int j=1;j<=i;j++) X[j]=0;
			while(!ok){
				string s;
				for(int j=1;j<=i;j++){
					if(X[j] == 1) s+='8';
					else s+='6';
				}
				res.push_back(s);
				sinh(i);
			}
			for(int i=res.size()-1;i>=0;i--){
				ans.push_back(res[i]);
			}
			res.clear();
		}
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
			ans.clear();
			cout<<endl;
	}
	return 0;
}



