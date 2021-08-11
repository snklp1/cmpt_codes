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
        int n;
        cin>>n;
        int temp = n;
        int arr[26]={0};
        while(n--)
        {
            string s;
            cin>>s;
            for (int i = 0; i < s.length(); ++i)
            {
                /* code */
                char a;
                a = s[i];
                int term = (int)a - 97;
                arr[term]++;
            }
        }

        int ff = 0;

        for (int i = 0; i < 26; ++i)
        {
            /* code */
            if(arr[i]%temp==0)
            {
                ;
            }
            else
            {
                ff++;
                break;
            }
        }

        if(ff>0)
        {
            no();
        }
        else
        {
            yes();
        }
    }

    return 0;
}


//end
