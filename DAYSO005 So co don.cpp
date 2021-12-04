#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t,n,x,y,i,z,d,e;
	cin >> t;
	while(t--){
	    cin>>n;
	   	unordered_map<int, int> ma;
	   	// nhập liên tiếp 5 số nhanh nhất
	    int dem=0,tmp=n%5;
	    // nhập 5 số một lượt
	    for(i=0;i<n-tmp;i+=5){
	    	cin>>x>>y>>z>>d>>e;
	    	ma[x]++;ma[y]++;ma[z]++;ma[d]++;ma[e]++;
		}
		// nhập nốt phần dư của 5 số (1007 nhập 1005 số đầu còn 2 số dư còn lại nhập nốt)
		for(i=0;i<tmp;i++){
			cin>>x;
	    	ma[x]++;
		}
		// Duyệt map p.first lấy các phần tử của mảng,p.second là giá trị số lần lặp
		for(auto&p:ma){
			if(p.second==1) dem++;
		}
	    cout<<dem<<endl;
    }
	return 0;
}
