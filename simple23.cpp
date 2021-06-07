#include<bits/stdc++.h>
using namespace std;

//int pre[1000001]={0};



int main()
{
    int k,r;
    cin>>k>>r;

    int copy = k;

    int ans = 0;

    for(int i=0;i<10;i++)
    {
        ans++;
        if(k%10==r||k%10==0)
        {
            break;
        }
        else
        {
            k=k+copy;
        }
    }
    

    cout<<ans<<endl;

    return 0;
    
}
