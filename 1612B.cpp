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
        int n,a,b;
        cin>>n>>a>>b;

        int pos_min = n-a;
        int pos_max = b-1;

        //cout<<"pos_min="<<pos_min<<" pos_max="<<pos_max<<endl;

        int arr[n] = {0};
        arr[n/2-1] = a;
        arr[n/2] = b;

        int pos = n-1;
        int space = n/2-1;

        for(int i=1;i<=n;i++)
        {
            if(i!=a&&i!=b&&space>0&&i<b)
            {
                //cout<<"accepted to be added to right = "<<i<<endl;
                arr[pos] = i;
                space--;
                pos--;
            }
        }

        int pos2 = 0;
        space = n/2-1;

        for(int i=n;i>=1;i--)
        {
            if(i!=a&&i!=b&&space>0&&i>a)
            {
                //cout<<"accepted to be added to left = "<<i<<endl;
                arr[pos2] = i;
                space--;
                pos2++;
            }
        }

        int no=0;

        int check[n]={0};

        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                no++;
                break;
            }
            else
                check[arr[i]-1]++;
        }

        if(no>0)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(check[i]!=1)
                {
                    no++;
                    break;
                }
            }

            if(no>0)
            {
                cout<<-1<<endl;
                continue;
            }


            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }        
            cout<<endl;
        }

            
    }

    return 0;
}


//end
