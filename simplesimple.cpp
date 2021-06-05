#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
 
    int leave = -1;
    int end = m-1;
 
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
            if(end==0)
            {
                end=1;
            }
            else
            {
                end=0;
            }
        }
        if(i%2!=0)
        {
            if(end==1)
            {
                cout<<"#";
            }
            for(int j=0;j<m-1;j++)
            {
                cout<<".";
            }
            if(end==0)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        
 
    }
 
    return 0;
    
}
