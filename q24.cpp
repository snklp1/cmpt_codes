//biggest smallest mistake of all time.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tescases;
    cin>>tescases;
    while(tescases--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min = a[0];
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]<min)
                min = a[j+1];
        }
        
        if(min<k)
        {
            cout<<k-min<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    return 0;
}
