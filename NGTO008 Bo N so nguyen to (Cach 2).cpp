#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int n, p, s;
vector< vector<int> >vtr;
int  sum;
int F[500]={0};

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
		if(F[i]==1){
			if(sum+i<=s&&res.size()<n){
				sum+=i;
				res.push_back(i);
				Try(n, i, s, res);
				res.pop_back(); // loại bỏ giá trị không thỏa mãn ra khỏi vector để 7 cộng với số khác
				sum-=i;// tổng trừ đi số bị bỏ
			}
		}
	}
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//	int t;
	//	cin>>t;
	//	while(t--){
	for(int i=2;i<500;i++){
		if(nt(i)) F[i]=1;
	}

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