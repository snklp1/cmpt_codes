#include<bits/stdc++.h>
using namespace std;

//Author: snklp1
//TE: Sublime Text 3
//snpt(1) ok_start

#define llint       long long int
#define lint        long int
#define vint        vector<int>
#define vllint      vector<long long int> 
#define vpint       vector<pair<int,int>> 
#define vpllint     vector<pair<long long int, long long int>> 
#define MP          make_pair
#define PB          push_back
#define POB         pop_back
#define all(v)      (v).begin(),(v).end()

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
    int arr[n];
    int num[101]={0};
    for (int i = 0; i < n; ++i)
    {
      /* code */
      cin>>arr[i];
      num[arr[i]]++;
    }

    for (int i = 0; i < 101; ++i)
    {
      /* code */
      if(num[i]>0)
      {
        cout<<i<<" ";
        num[i]--;
      }
    }

    for (int i = 0; i < 101; ++i)
    {
      /* code */
      if(num[i]>0)
      {
        while(num[i]>0)
        {
          cout<<i<<" ";
          num[i]--;
        }
      }
    }

    cout<<endl;
  }

    return 0;
}


//end
