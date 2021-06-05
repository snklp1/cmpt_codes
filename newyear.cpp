#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int time = 0;
    int solved = 0;

    for(int i=1;i<=n;i++)
    {
        time = time + i*5;
        //cout<<time<<endl;
        if(time+k<=240)
        {
            solved = i;
        }
        else
        {
            break;
        }
    }

        cout<<solved<<endl;

    return 0;
    
}
