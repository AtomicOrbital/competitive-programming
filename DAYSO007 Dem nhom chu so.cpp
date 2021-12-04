#include<bits/stdc++.h>
using namespace std;

int dp[101][901];
int solve(string num,int position,int previous_sum,int length){
	if(position==length) return 1;
	// neu gia tri da cho dung theo yeu cau de thi tra ve gia tri
	if(dp[position][previous_sum]!=-1) return dp[position][previous_sum];
	dp[position][previous_sum]=0;
	int res=0;
	int sum=0;//tong cac chu so
	for(int i=position;i<length;i++){
		sum+=(num[i]-'0');
		//neu tong tiep theo lon hon so voi tong trc do thi goi lai phuong thuc
		if(sum>=previous_sum)
			//chuyen tong hien tai thanh tong truoc do
			res+=solve(num,i+1,sum,length);
	}
	dp[position][previous_sum]=res;
	return res;
}
int countTotal(string s){
	memset(dp,-1,sizeof(dp));
	int len=s.size();
	return solve(s,0,0,len);
}
int main(){
	int t;
	cin>>t;
	// cin.ignore();
	while(t--){
		int n;
		string a;
		cin>>n>>a;
		cout<<countTotal(a)<<endl;
		// getline(cin,s);
		// stringstream ss(s);
		// string w;
		// vector<string>res;
		// while(ss>>w){
		// 	res.push_back(w);
		// }
		// cout << countTotal(res[1])<<endl;
	}
    return 0;
}


