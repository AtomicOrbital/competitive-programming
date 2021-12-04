#include<bits/stdc++.h>
using namespace std;
long long longestSubquence(int n,int a[]){
	vector<int> ans;
    for(int j=0;j<n;j++){
        int i=a[j];
        auto it=lower_bound(ans.begin(),ans.end(),i);
        if(it==ans.end())
            ans.push_back(i);
        else
            *it=i;
    }
    return ans.size();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<longestSubquence(n,a)<<endl;
	}
	return 0;
}


