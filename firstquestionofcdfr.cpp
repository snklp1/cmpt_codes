#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        //cout<<s<<endl;

        int dir = 2;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(dir==2||dir==3)
                {
                    dir++;
                    //cout<<dir;
                }
                else
                {
                    if(dir==4)
                    {
                        dir=1;
                        //cout<<dir;
                    }
                    else
                    {
                        dir=2;
                        //cout<<dir;
                    }
                }
            }
            else
            {
                if(dir!=1)
                {
                    dir--;
                    //cout<<dir;
                }
                else
                {
                    dir=4;
                    //cout<<dir;
                }
            }




            






        }

        if(dir==1)
            {
                cout<<"N"<<endl;
            }
            if(dir==2)
            {
                cout<<"E"<<endl;
            }
            if(dir==3)
            {
                cout<<"S"<<endl;
            }
            if(dir==4)
            {
                cout<<"W"<<endl;
            }

            
    }
}
