#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int knapsack(int *a, int n, int k)
{
    int table[k+1];
    table[0]=0;
    map<int, int> m;
    for(int i=0; i<n; i++)
        m[a[i]]=1;
    
    for(int i=0; i<=k; i++)
    {
        if(m[i]==1) table[i]=i;
        else
            for(int j=0; j<n; j++)
            {
                if(m[i-a[j]]==1) {table[i]=i; m[i]=1; break;}
                else table[i]=table[i-1];
            }
    }

    //for(int i=0; i<=k; i++)
        //cout<<table[i]<<" ";
    //cout<<endl;
    return table[k];
}

int main() {
    int t,n,k;
    cin>>t;
    while(t)
    {
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<knapsack(a,n,k)<<endl;
        t--;
    }
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int knapsack(int *a, int n, int k)
{
    int table[k+1];
    table[0]=0;
    map<int, int> m;
    for(int i=0; i<n; i++)
        m[a[i]]=1;
    
    for(int i=0; i<=k; i++)
    {
        if(m[i]==1) table[i]=i;
        else
            for(int j=0; j<n; j++)
            {
                if(m[i-a[j]]==1) {table[i]=i; m[i]=1; break;}
                else table[i]=table[i-1];
            }
    }

    //for(int i=0; i<=k; i++)
        //cout<<table[i]<<" ";
    //cout<<endl;
    return table[k];
}

int main() {
    int t,n,k;
    cin>>t;
    while(t)
    {
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<knapsack(a,n,k)<<endl;
        t--;
    }
    return 0;
}
