#include<bits/stdc++.h>
#include<cstring>
using namespace std;
// Input  
// 3 4 54

// Output
// 5 7 11 31 
// 5 7 13 29 
// 5 7 19 23 
// 5 13 17 19 
// 7 11 13 23 
// 7 11 17 19
int n, p, s;
vector< vector<int> >vtr;
int  sum;
bool nt(int i){
	if(i<2) return false;
	else if(i<=3) return true;
	else if(i%2==0||i%3==0) return false;
	else{
		for(int j=5; j<=sqrt(i); j+=6)
			if(i%j==0||i%(j+2)==0) return false;
		return true;
	}
}
void Try(int n, int p, int s, vector<int>res){
	if(sum>s) return;
	if(res.size()==n&&sum==s){
		vtr.push_back(res);
		return;
	}
	for(int i=p+1; i<=500; i++){
		if(nt(i)){
			if(sum+i<=s&&res.size()<n){
				sum+=i;
				res.push_back(i);
				Try(n, i, s, res);
				res.pop_back();
				sum-=i;
			}
		}
	}
}
int main(){
//	int t;
//	cin>>t;
//	while(t--){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
		cin>>p>>n>>s;
		sum=0;
		vtr.clear();
		vector<int>res;
		Try(n, p, s, res);
		sort(vtr.begin(), vtr.end());
		if(vtr.size()==0) cout<<-1<<endl;
		else{
	
			for(int i=0; i<vtr.size(); i++){
				for(int j=0; j<vtr[i].size(); j++)  cout<<vtr[i][j]<<" ";
				cout<<endl;
			}
		}

	return 0;
}