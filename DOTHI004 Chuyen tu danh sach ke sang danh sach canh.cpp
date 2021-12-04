#include<bits/stdc++.h>
using namespace std;
// Input  
// 3
// 2 3
// 1 3
// 1 2

// Output  
// 1 2
// 1 3
// 2 3
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
		int n; cin >> n;
		vector<int> vtr[100];
		string str;
		cin.ignore();
		for (int i = 1; i <= n; i++) {
			getline(cin, str);
			str += " ";
			int res = 0;
			int j = 0;
			while (j < str.size()) {
				if (str[j] >= '0' && str[j] <= '9') {
					res = res * 10 + (int)(str[j] - '0');
				}
				else if (res > 0) {
					vtr[i].push_back(res);
					res = 0;
				}
				j++;
			}
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < vtr[i].size(); j++) {
				if (vtr[i][j] > i) {
					cout << i << " " << vtr[i][j] << endl;
				}
			}
		}	
	return 0;
}