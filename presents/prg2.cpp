#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int safe = n;
    int giver[n];
    int reciever[n+1];

    int i=0;
    while(i<n)
    {
        cin>>giver[i];
        reciever[giver[i]]=i+1;
        i++;
    }

    int j=1;

    while(j<=n)
    {
        cout<<reciever[j]<<" ";
        j++;
    }

    return 0;
}