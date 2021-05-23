#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,h;
    cin>>n>>h;

    int w =0;


    while(n--)
    {
        int i;
        cin>>i;
        if(i>h)
        {
            w++;
            w++;
        }
        else
        {
            w++;
        }

    }

    cout<<w<<endl;
    return 0;
}
