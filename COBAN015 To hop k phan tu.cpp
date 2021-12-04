#include<bits/stdc++.h>
using namespace std;
int  X[1000],n,k;
vector<vector<int> > res;
vector<int> ans;
bool ok;
void sinh(){
	int i=k;
	while((i>0)&&(X[i]==n-k+i))	i--;
	if(i==0){
		ok=true;return;
	}		
	else{
		X[i]=X[i]+1;
		for(int j=i+1;j<=n;j++) X[j]=X[i]+(j-i);
	}	
	return;
}
void solve(){
	ans.clear();
	for(int i=1;i<=k;i++) ans.push_back(X[i]);
	res.push_back(ans);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		res.clear();ans.clear();
		cin>>n>>k;
		ok=false;
		for(int i=1;i<=k;i++){
			X[i]=i;
		}
		while(!ok){
			solve();
			sinh();
			
		}
		cout<<res.size()<<endl;
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++){
			cout<<"[";
			for(int j=0;j<res[i].size()-1;j++){
				cout<<res[i][j]<<" ";
			}
			cout<<res[i][res[i].size()-1]<<"]"<<endl;
		}
	}
	return 0;
}