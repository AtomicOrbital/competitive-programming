#include<bits/stdc++.h>
using namespace std;
// Input  
// 2
// 4 13 Ví dụ với L=4, R=13 ta có 5 số thảo mãn yêu cầu là 4, 5, 10, 12, 13
// 100 1000

// Output  
// 5
// 100
int check(int n){
	std::vector<int> v;
	while(n>0){
		v.push_back(n%10);
		n/=10;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(v[i]>5 || v[i] == v[i+1]) return 0;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		int L,R;
		cin>>L>>R;
		int count=0;
		for(int i=L;i<=R;i++){
			if(check(i)) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}