#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans;

        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        int next = 1;
        int min_dif = 999;
        for(int i=0;i<n-1;i++)
        {
            int temp = arr[next]-arr[i];
            if(temp<min_dif)
            {
                min_dif = temp;
            }
            next++;
        }

        ans = min_dif;

        cout<<ans<<endl;

    }


    return 0;
}
