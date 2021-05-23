
#include<bits/stdc++.h>
using namespace std;
 
void lh(int n)
{
    int a[6] = {4,7,44,47,74,77};
    for(int i=0;i<6;i++)
    {
        if(n%a[i]==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
 
 
void ah(int n)
{
    int a[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++)
    {
        if(n%a[i]==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
 
int main()
{
    int n;
    cin>>n;
 
    if(n<4)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        if(n<100)
        {
            lh(n);
        }
        else
        {
            ah(n);
        }
    }
 
    return 0;
}
