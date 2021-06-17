#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;

    if(n>0)
    {
        cout<<n<<endl;
        return 0;
    }
    else
    {
        long int m;
        int temp = n%10;
        m = n/10;
        long int k;
        k = m/10;
        k = k*10;
        k = k+temp;

        if(k<m)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<k<<endl;
        }

        return 0;

    }
    return 0;
}
