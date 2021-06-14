#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int holder[n];
        int parity_check_even =0;
        int parity_check_odd = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]%2==0)
            {
                if(i%2==1)
                {
                    parity_check_odd++;
                }
                
            }
            else
            {
                if(i%2==0)
                {
                    parity_check_even++;
                }
                
            }
        }

        

        if(parity_check_even==parity_check_odd)
        {
            int move = 0;
            move = parity_check_odd;
            cout<<move<<endl;

        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
