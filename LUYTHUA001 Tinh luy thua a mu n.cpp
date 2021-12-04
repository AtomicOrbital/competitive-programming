#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
int multiply(int a, int arr[], int arr_size){
    int c = 0; //T?o bi?n nh?
    //nh�n t?ng ch? s? trong m?ng v?i a
    for(int i=0;i < arr_size; i++){
        int result = arr[i]*a +c;
        arr[i] = result % 10;
        c = result /10;
    }
    //Luu gi� tr? nh? c v�o m?ng r?i tang k�ch thu?c arr_size
    while(c){
        arr[arr_size] = c%10;
        c/=10;
        arr_size++;
    }
    return arr_size;
}

void power_large_num(int a,int n){
    if(n == 0){
        cout << "1";
        return;
    }
    int arr[MAX];
    int arr_size = 0;
    int temp = a;
    //Kh?i t?o m?ng k?t qu?
    while(temp != 0){
        arr[arr_size] = temp%10;
        arr_size++;
        temp/=10;
    }
    //Nh�n n l?n a v?i m?ng arr
    for(int i=2; i <= n; i++){
        arr_size = multiply(a, arr, arr_size);
    }
    //In ra k?t qu?
    for(int i= arr_size - 1; i >= 0; i--){
        cout << arr[i];
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,n;
        cin >> a >> n;
        if(a==0)
            cout << "0";
        else
            power_large_num(a,n);
        cout << endl;
    }
    return 0;
}
