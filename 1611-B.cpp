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
        llint a,b;
        cin>>a>>b;

        llint all = a+b;
        if(all<4||a==0||b==0)
        {
            cout<<0<<endl;
            continue;
        }
        llint max_teams = all/4;

        llint arr[3] = {max_teams, a, b};
        sort(arr,arr+3);
        cout<<arr[0]<<endl;
        
    }

    return 0;
}


//end
