#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin>>n>>m;
    int low;

    if(m<n)
    {
        low = m;
    }
    else
    {
        low = n;
    }

    if(low%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }


}

