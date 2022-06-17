#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		string s;
		cin >> s;
		long long count_B = 0;
		if(s.length() > 1e6) break;
		for(int i= 0; i<s.size();i++){
			if(s[i] == 'B') count_B++;
		}
		long long count_A = s.size() - count_B;
		long long MinA = min(count_A + 1, count_B);//neu phan cuoi la a thi lay luon so lan doi
		long long dem = 0;
		for(int i=0; i<s.size() - 1; i++){
			if(s[i] != s[i+1]) dem++;
		}
		if(s[s.size() - 1] == 'B') dem++;
		MinA = (min(MinA, dem));
		cout << MinA << endl;
	}
	return 0;
}

