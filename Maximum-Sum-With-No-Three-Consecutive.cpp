#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int CSQ(long int *a, long int n)
{
    long int table[n+2];
    table[0]=0;
    table[1]=0;
    table[2]=a[0];
    for(long int i=3; i<=n+1; i++)
    {
        table[i]=max(table[i-1],a[i-2]+table[i-2]);
        table[i]=max(table[i],a[i-2]+a[i-3]+table[i-3]);
    }    
   // for(int i=0; i<=n+1; i++)
     //   cout<<table[i]<<" ";
    //cout<<endl;
    return table[n+1];  
}

int main() {
    long int n;
    cin>>n;
    long int *a=new long int[n];
    for(long int i=0; i<n; i++) cin>>a[i];
    cout<<CSQ(a,n);
    return 0;
}
