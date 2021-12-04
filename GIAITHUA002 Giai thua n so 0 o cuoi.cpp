#include<bits/stdc++.h>
using namespace std;
long long n;
bool kiemtra(long long p){
	
    long long tmp = p, count = 0, a = 5;
    while (a <= tmp){
        count += tmp/a;
        a = a*5;
    }
    return count >= n;
}
long long chuyen_doi(){
    if (n==1)
        return 5;
    long long left = 0,right = 5*n ,mid;
 
    while (left <right){
        mid = (left + right) / 2;
        if (kiemtra(mid))
		  	right = mid;
        else
            left = mid+1;
    }
    return left;
}
 
int main(){
	int t;cin>>t;
	while(t--){
	   	cin>>n;
	    cout << chuyen_doi() << endl;
	}	
    return 0;
}
