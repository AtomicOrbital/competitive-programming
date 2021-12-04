#include<bits/stdc++.h>
using namespace std;
// Input  
// 2
// 11
// 10

// Output  
// 47
// -1

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int dem4=0,dem7=0;
		// duyệt từ cuối về đếm số lượng số 4,7 của xâu thỏa mãn 
		// xâu càng nhiều số 4 thì giá trị càng nhỏ nên duyệt từ n-1
		for(int i=n-1;i>=0;i--){
			if(n >= 4*i && (n-4*i) % 7 == 0){
				dem4 = i;
				dem7 = (n - 4*i)/7;
			}
		}
		if(4*dem4 + 7*dem7 == n){
			for(int i=0;i<dem4;i++) cout<<4;
			for(int i=0;i<dem7;i++) cout<<7;
		}
		else cout<<"-1";
		cout<<endl;
	}	
	return 0;
}