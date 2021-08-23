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
    int arr[1000]={0};
    int num = 1;
    int i = 0;
    while(i<1000)
    {
        if(num%3==0||num%10==3)
        {
            ;
        }
        else
        {
            arr[i] = num;
            i++;
        }

        num++;
    }

    //cout<<arr[999]<<endl;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<arr[k-1]<<endl;  
    }

    return 0;
}


//end
