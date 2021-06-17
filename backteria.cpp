#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int x;
    cin>>x;

    int fnd =0;

    int cnt = 0;

    while(x>0)
    {
        if(x%2==0)
        {
            x=x/2;
        }
        else
        {
            x=x-1;
            x=x/2;
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;


}
