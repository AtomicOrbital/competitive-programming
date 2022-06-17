#include<bits/stdc++.h>

using namespace std;


void solve(){
	long long n;
	cin >> n;
	vector<long long > arr(n);
	for(int i=0; i<n; i++) cin >> arr[i];
	unordered_set<long long> s;
    for(int i = 0; i<n; i++) s.insert(arr[i]*arr[i]);
    bool check = false;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            int sum = arr[i]*arr[i] + arr[j]*arr[j];
            if(s.find(sum) != s.end())
                check = true;
        }
    }
    if(check == true) cout << "YES" << endl;
	else cout << "NO" << endl;
	
}


int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

