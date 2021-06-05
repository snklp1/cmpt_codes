#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int pre[101]={0};
        int n;
        cin>>n;

        /*
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        */

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pre[a[i]]=pre[a[i]]+1;
        }

        

        int streak=0;
        int failed =0;

        int prev = 0;

        for(int i=1;i<101;i++)
        {
            if(prev==0&&pre[i]>0)
            {
                streak =  streak + pre[i];
                prev=1;
            }
            else
            {
                if(prev==1&&pre[i]>0)
                {
                    streak=streak+pre[i];
                    prev=1;
                }
                else
                {
                    if(prev==1&&pre[i]==0)
                    {
                        break;
                    }
                }
            }

        }

        if(streak==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        

        /*
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int j=1;j<101;j++)
        {
            if(pre[j]>0)
            {
                cout<<j<<"-"<<pre[j]<<endl;
            }
        }
        cout<<endl;
        */


    }
    return 0;
    
}
