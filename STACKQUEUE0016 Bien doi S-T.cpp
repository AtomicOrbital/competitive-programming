#include<bits/stdc++.h>
using namespace std;
int s,t;
struct G{
	int x,dem;
};
int BFS(int a,int b){
	set<int> res;
	res.insert(a);
	queue<G> q;
	q.push({a,0});
	while(q.size()>0){
		G ans=q.front();q.pop();
		if(ans.x==b) return ans.dem;
		if(ans.x*2==b||ans.x==b+1) return ans.dem+1;
		if(res.find(ans.x*2)==res.end()&&ans.x<b){
			q.push({ans.x*2,ans.dem+1});
			res.insert(ans.x*2);
		}
		if(res.find(ans.x-1)==res.end()&&ans.x-1>0){
			q.push({ans.x-1,ans.dem+1});
			res.insert(ans.x-1);
		}
	} 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int T;
	cin >> T;
	while(T--){
        cin>>s>>t;
        cout<<BFS(s,t)<<endl;
	}
   	return 0;
}
