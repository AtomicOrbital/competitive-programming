#include <bits/stdc++.h>
using namespace std;
long long sumPrime(long long n){
	long long prime[n+1], sum = 0;
	memset(prime,false, sizeof(prime));
	long long max = n / 2;
	for (long long p=2; p<=max; p++){
		if (prime[p] == false){
			for (int i=p*2; i<=n; i += p)
				prime[i] = p;
		}
	}
	for (long long p=2; p<=n; p++){
		if (prime[p])
			sum += prime[p];		
		else
			sum += p;
	}
	return sum;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<< sumPrime(n)<<endl;
	}
	return 0;		
}

