#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	map<int , int> m;
	vector<int > A(n);
	map<int ,int > mp;
	
	for(int i=0; i<n; i++){
		cin >> A[i];
		mp[A[i]] = 1;
	}
	
	sort(A.begin(), A.end());
	
	int count = 0;
	for(int i=A[0]; i<A[n-1]; i++){
		if(mp[i] != 1) count++;
	}
	cout << count << endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}



