#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int wlfr[n];
    for(int i=0;i<n;i++)
    {
        cin>>wlfr[i];
    }

    sort(wlfr,wlfr+n);

    long int change = 0;

    for(int j=0;j<n-1;j++)
    {
        change = change + (wlfr[n-1]-wlfr[j]);
    }

    cout<<change<<endl;
    
}
