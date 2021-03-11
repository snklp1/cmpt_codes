//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/k-rotation-is-what-you-can-855157f8/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;
    int a[n];
    int temp[n];
    int cts = -1*d;
    
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }

    for(int i=0;i<n;i++)
    {
        if((n+i-d)<n)
        {
            temp[n+i-d]=a[i];
            cts++;
            
        }
        else
        {
            
            temp[cts]=a[i];
            cts++;
        }


    }
    for(int j=0;j<n;j++)
    {
        cout<<temp[j]<<" ";
    }
    return 0;
}

