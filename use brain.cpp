#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int min = a;
        int max= b;

        int ans = 0;

        if(b<a)
        {
            min = b;
            max = a;
        }

        if(min+min<max)
        {
            ans = max*max;
        }
        else
        {
            ans = 4*min*min;
        }

        cout<<ans<<endl;

    }


    return 0;
}
