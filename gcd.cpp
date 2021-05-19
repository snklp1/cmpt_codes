#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int arr[num];
        int temp;
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
            if(i==0)
            {
                temp = __gcd(arr[i],arr[i]);
            }
            else
            {
                temp = __gcd(temp,arr[i]);
            }

        }

         for(int j=0;j<num;j++)
         {
            cout<<arr[j]/temp<<" ";
         }
         cout<<endl;
    }
    return 0;
}
