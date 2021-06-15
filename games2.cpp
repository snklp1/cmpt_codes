#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int one = 0;
    int two = 0;

    for(int i=0;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;

        if(temp1>temp2)
        {
            one++;
        }
        if(temp1<temp2)
        {
            two++;
        }
    }

    if(one>two)
    {
        cout<<"Mishka"<<endl;

    }
    else
    {
        if(one==two)
        {
            cout<<"Friendship is magic!^^"<<endl;
        }
        else
        {
            cout<<"Chris"<<endl;
        }
    }

    return 0;
}
