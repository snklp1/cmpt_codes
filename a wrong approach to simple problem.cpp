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
        map<int,int> m;
        vint v;
        for (int i = 0; i < n; ++i)
        {
            /* code */
            int temp;
            cin>>temp;
            v.PB(temp);
            m[temp]++;
        }
        int gtt = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                auto it1 = m.find(v[i]%v[j]);
                auto it2 = m.find(v[j]%v[i]);

                if(it1==m.end()&&gtt<n/2)
                {
                    cout<<v[i]<<" "<<v[j]<<endl;
                    gtt++;
                }
                if(it2==m.end()&&gtt<n/2)
                {
                    cout<<v[j]<<" "<<v[i]<<endl;
                    gtt++;
                }
                if(gtt==n/2)
                {
                    break;
                }
            }
        }

        //cout<<endl;

        
        


    }

    return 0;
}


//end
