#include<bits/stdc++.h>
using namespace std;
bool compareLargest(string s1,string s2){
	string len1=s1+s2;
	string len2=s2+s1;
	return len1<len2;
}
string printLargest(vector<string>arr){
	sort(arr.begin(),arr.end(),compareLargest);
	string res="";
	int len=arr.size();
	for(int i=len-1;i>=0;i--){
		res.append(arr[i]);
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<printLargest(arr)<<endl;
	}
	return 0;
}


