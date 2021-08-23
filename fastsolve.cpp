#include<bits/stdc++.h>
using namespace std;

//Author: snklp1
//TE: Sublime Text 3
//snpt(1) ok_start

#define llint         long long int
#define lint          long int
#define vint          vector<int>
#define vllint        vector<long long int> 
#define vpint         vector<pair<int,int>> 
#define vpllint       vector<pair<long long int, long long int>> 
#define MP            make_pair
#define PB            push_back
#define POB           pop_back
#define all(v)        (v).begin(),(v).end()

//int fun()

void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int one = 0, z = 0;
        for (int i = 0; i < n; ++i)
        {
            /* code */
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                z++;
            }
        }

        if(c0==c1)
        {
            cout<<n*c0<<endl;
        }
        else
        {
            if(c0<c1)
            {
                if(h+c0>c1)
                {
                    cout<<(c0*z)+(c1*one)<<endl;
                }
                else
                {
                    cout<<(h*one)+(c0*n)<<endl;
                }
            }   
            else
            {
                if(h+c1>c0)
                {
                    cout<<(c0*z)+(c1*one)<<endl;
                }
                else
                {
                    cout<<(h*z)+(c1*n)<<endl;
                }
            }
        }
    }

    return 0;
}


//end
