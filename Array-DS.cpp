#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		int n;
		cin >> n;
		vector<int> A(n);
		for(int i=0; i<n; i++) cin >> A[i];
		
		for(int i=n-1; i>=0; i--) cout << A[i] << " ";
		cout << endl;
	}
	return 0;
}

