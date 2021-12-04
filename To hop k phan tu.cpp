#include<bits/stdc++.h>
using namespace std;
void comb(int N, int K)
{
    std::string bitmask(K, 1); // K leading 1's
    bitmask.resize(N, 0); // N-K trailing 0's
 	int cnt=0,c;
    // print integers and permute bitmask
    do {
    	cnt = 0;
        for (int i = 0; i <N; ++i) // [0..N-1] integers
        {
        	if(cnt!=0){
        		
        		if (bitmask[i]){
			}
        		
			}else{
            if (bitmask[i]){
			cnt++;}}
        }
        c++;
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
    cout<<c<<endl;
    do {
    	cnt = 0;
    	
    	
    	cout<<"[";
        for (int i = 0; i <N; ++i) // [0..N-1] integers
        {
        	if(cnt!=0){
        		
        		if (bitmask[i]){ 
			std::cout<<" "<<i+1;
			}
        		
			}else{
            if (bitmask[i]){ 
			std::cout<<i+1;
			cnt++;}}
        }
        std::cout <<"]"<< std::endl;
        c++;
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
}
 
int main()
{	
long long t;
	int n,k;
	cin>>t;
	
	while(t--){
		cin>>n>>k;
		comb(n, k);
	}
    
}
