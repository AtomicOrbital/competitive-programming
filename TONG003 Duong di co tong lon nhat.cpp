#include<iostream>
#include<algorithm>
using namespace std;
 // (i, j+1); (i−1, j+1); (i+1, j+1)
int arr[102][102];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		int m, n, result;
		cin >> m >> n;
		for (int i = 1; i <= m; ++i)
			for (int j = 1; j <= n; ++j)
				cin >> arr[i][j];
		for (int j = 0; j <= n; ++j)
			arr[0][j] = arr[m + 1][j] = - 101;
		for (int j = 2; j <= n; ++j)
			for (int i = 1; i <= m; ++i)
				arr[i][j] += max(arr[i - 1][j - 1], max(arr[i][j - 1], arr[i + 1][j - 1]));
		result = arr[1][n];
		for (int i = 2; i <= m; ++i)
			result = max(result, arr[i][n]);
		cout << result<< endl;
	}
	return 0;
}