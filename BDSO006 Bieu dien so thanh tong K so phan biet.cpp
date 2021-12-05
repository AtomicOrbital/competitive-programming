#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int n, p, s;
vector< vector<int> >vtr;
int  sum;
int F[500]={0};
void Try(int n, int p, int s, vector<int>res){
	if(sum>s) return;
	if(res.size()==n&&sum==s){
		vtr.push_back(res);
		return;
	}
	for(int i=p+1; i<=500; i++){
		if(F[i]==1){
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
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a[95]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,
	73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,
	199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,
	373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499};

	for(int i=0;i<95;i++){
		F[a[i]] =1;
	}
	int t;
	cin>>t;
	while(t--){
		cin>>s>>n;
		sum=0;
		vtr.clear();
		vector<int>res;
		Try(n, 1, s, res);
		cout<<vtr.size()<<endl;
//		for(int i=0; i<vtr.size(); i++){
//			for(int j=0; j<vtr[i].size(); j++)  cout<<vtr[i][j]<<" ";
//			cout<<endl;
//		}
 	}
	return 0;
}