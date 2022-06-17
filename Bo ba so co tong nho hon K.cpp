#include<bits/stdc++.h>
using namespace std;
  
void countTriplets(long long a[], long long n, long long k){
    sort(a, a+n);
    long long ans = 0;
    for (int i = 0; i < n - 2; i++){
        int j = i + 1, x = n - 1;
        while (j < x){
            if (a[i] + a[j] + a[x] >= k)
                x--;
            else{
                ans += (x - j);
                j++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n+5];
		for(int i=0; i<n; i++) cin >> a[i];
		countTriplets(a, n, k);
	}
    return 0;
}
