#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int n){
	int x=sqrt(n);
	return (x*x==n);
}
bool checkFibonacci(int n){
	return (isPerfectSquare(5*n*n-4)) || (isPerfectSquare(5*n*n+4));
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<=3) cout<<"4"<<endl;
		//neu n+1 la so fibonacci thi n+2 cung phai la so fibonacci va nguoc lai
		else if(checkFibonacci(n+1)) cout<<n+2<<endl;
		else cout<<n+1<<endl;
	}
	return 0;
}



