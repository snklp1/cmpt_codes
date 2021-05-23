#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
 
    int good = 0;
    int back = a.length();
    for(int i=0;i<b.length();i++)
    {
        back--;
        if(a[back]==b[i])
        {
            ;
        }
        else
        {
            good++;
            break;
        }
 
    }
    if(good==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
