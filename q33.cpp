#include<bits/stdc++.h>
using namespace std;

long long int calci(int n,int r)
{
    long long int rf=1;
    long long int nf=1;
    if(n==0)
    {
        return 1;
    }
    else
    {

        for(int i=1;i<=n-r;i++)
        {
            rf = rf*i;
        }

        for(int j=n;j>r;j--)
        {
            nf = nf*j;
        }
        return nf/rf;
    }
}

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<=i;j++)
            {
                cout<<calci(i,j)<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
