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

int ascii(char a)
{
    int num = a;
    num = num - 48;
    return num;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n; 

        if(ascii(n[n.length()-1])%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int fnd = 0;
            for(int i=0;i<n.length();i++)
            {
                if(ascii(n[i])%2==0&&i==0)
                {
                    fnd = 1;
                    break;
                }
                else
                {
                    if(ascii(n[i])%2==0)
                    {
                        fnd = 2;
                        break;
                    }
                }
            }
            if(fnd>1)
            {
                cout<<2<<endl;
            }
            else
            {
                if(fnd==1)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }
        
    }

    return 0;
}


//end
