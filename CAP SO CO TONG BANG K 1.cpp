#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int > A(n);
	for(int i=0; i<n ;i++) cin >> A[i];
	
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(A[i] + A[j] == k){
				count++;
			}
		}
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



