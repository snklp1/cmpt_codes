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
        int x,n,m;
        cin>>x>>n>>m; 
    
        
        while(n>0||m>0)
        {
            /*
            cout<<"current value :"<<x<<endl;
            cout<<"void left:"<<n<<" strike left: "<<m<<endl;
            cout<<"void:"<<(x/2)+10<<" and strike: "<<x-10<<endl;
            */
            
            if(((x/2)+10)<x)
            {
                if(n>0)
                {
                    x = x/2;
                    x = x+10;
                    n--;
                }
                else
                {
                    if(m>0)
                    {
                        x = x -10;
                        m--;
                    }
                }
                    
            }
            else
            {
                if(m>0)
                {
                    x = x - 10;
                    m--;
                }
                else
                {
                    if(n>0)
                    {
                        x = x/2;
                        x = x+10;
                        n--;
                    }
                }
            }
 
            if(x<=0)
            {
                break;
            }
                
            
            //cout<<"changed Num: "<<x<<endl<<endl;
            
        }
 
        if(x<=0)
        {
            yes();
        }
        else
        {
            no();
        }
 
 
 
    }
 
    return 0;
}
 
 
//end
