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
        long double x1,p1,x2,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;
        
        while(x1>=10)
        {
            x1 = x1/10;
            p1++;
        }

        while(x2>=10)
        {
            x2 = x2/10;
            p2++;
        }
        /*
        cout<<"x1:"<<x1<<" p1:"<<p1<<endl;
        cout<<"x2:"<<x2<<" p2:"<<p2<<endl;
    */
        if(p2==p1)
        {
            if(x1>x2)
            {
                cout<<">"<<endl;
            }
            else
            {
                if(x2==x1)
                {
                    cout<<"="<<endl;
                }
                else
                {
                    cout<<"<"<<endl;
                }
            }
        }
        else
        {
            if(p2<p1)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }

    }

    return 0;
}


//end
