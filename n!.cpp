#include <iostream>
#include <iomanip>
using namespace std;
#define mod 1000

void giaithua(int n)
{
    int a[20000],i,j,m=1;
    long long r=0,q;
    a[0]=1;
    for(i=2;i<=n;i++)       //Nhan phan truoc voi so tiep theo
    {
        for(j=0;j<m;j++)        //chia ra cac o nho cua mang
        {
            q=r;
            r=(a[j]*i+r)/mod;        //check du
            a[j]=(a[j]*i+q)%mod;
        }
        while(r>0)          //Neu du thi tach phan du ra o khac, m ++ de tang o nho trong mang
        {
            a[m++]=r%mod;
            r=r/mod;
        }
    }
    cout << a[m-1];
    for(i=m-2;i>=0;i--)
    {    
        if(mod > 1000 && a[i] <1000) cout << 0;
		if(mod > 100 && a[i] <100) cout << 0;
		if(mod > 10 && a[i] <10) cout << 0;
        cout << a[i];
    }
}
int main(){

       int n, test;
       cin >> test;
       while(test --)
       {
              cin >> n;
              giaithua(n);
              cout << endl;
       }
    return 0;     
}
