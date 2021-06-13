#include<bits/stdc++.h>
using namespace std;


int main()
{
    int candles, remake;
    cin>>candles>>remake;

    int ans = candles;
    int rem = 0;

    while(1)
    {
        //cout<<candles<<endl;
        rem = rem + candles%remake;
        ans = ans + candles/remake;
        candles = candles/remake;
        if(candles==0)
        {
            if(rem<remake)
            {
                break;
            }
            else
            {
                candles = rem;
                rem = 0;
            }
        }
    }



    cout<<ans<<endl;
    return 0;
}
