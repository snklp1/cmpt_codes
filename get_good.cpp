#include<bits/stdc++.h>
using namespace std;


//class pack


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int r,b,d;
        cin>>r>>b>>d;

        //cout<<r<<endl;
        long int low,dif;

        if(d==0)
        {
            if(r==b)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }

        if(r<b)
        {
            low = r;
            dif = b-r;
            r=0;
            b=b-r;
        }
        else
        {
            low = b;
            dif = r-b;
            b=0;
            r=r-b;
        }

        //cout<<low<<endl;
        //cout<<"dif:"<<dif<<endl;

        if(dif==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            if(dif<=d)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                long int div = dif/d;
                long int rem = dif%d;

                if(rem>0)
                    div++;

                if(div<=low)
                {
                    cout<<"YES"<<endl;
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        
    }

    return 0;

}
