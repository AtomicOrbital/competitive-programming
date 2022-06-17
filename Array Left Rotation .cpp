#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, d;
	cin >> n >> d;
	vector<int > A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	
	for(int i=0; i<d; i++){
		for(int j=0; j<n-1; j++){
			swap(A[j], A[j+1]);
		}
	}
	
	for(int i=0; i<n; i++ ) cout << A[i] << " ";
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}

