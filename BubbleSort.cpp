#include<bits/stdc++.h>
using namespace std;

//Input
//4
//5 3 2 7
//Output
//Buoc 1: 3 2 5 7
//Buoc 2: 2 3 5 7
int a[101], n;
void in(){
	for(int i=0; i<n; i++) cout << a[i] << " ";
	cout << endl;
}

void BubbleSort(){
	for(int i=0; i<n-1; i++){
		bool check = false;
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				check = true;
			}
		}
		if(check == false) break; 
		cout << "Buoc " << i+1 << ":" << " ";
		in();
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		BubbleSort();
	}
	return 0;
}



