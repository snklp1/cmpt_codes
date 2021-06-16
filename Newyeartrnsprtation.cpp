#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    int k=1;
    int j = 0;
    int found = 0;
    //cout<<found<<endl;
    while(k<=t)
    {
        //cout<<"position: "<<k<<endl;
        
        if(k==t)
        {
            found++;
            break;
            //cout<<"found"<<endl;
        }
        else
        {
            k = k+a[j];
            j=j+a[j];
            //cout<<"Next"<<k<<endl;
            //cout<<found<<endl;

        }
    }

    if(found>0)
    {
        cout<<"YES"<<endl;
        //cout<<found<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;



    
}
