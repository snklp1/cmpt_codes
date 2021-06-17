#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int found = 0;
        long int circle = 2;
        long int x;
        long int divider = 1;
        while(found==0)
        {
            divider = divider + circle;
            if(n%divider==0)
            {
                x = n/divider;
                found++;
            }
            circle = circle*2;
        }

        cout<<x<<endl;
    }

    return 0;
}
