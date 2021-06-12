#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n];
        int b[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }

        sort(b,b+n);

        int back = n-1;

        for(int i=0;i<k;i++)
        {
            if(b[back]>a[i])
            {
                int temp;
                temp = a[i];
                a[i] = b[back];
                back--;
            }
            
        }

        int sum =0;

        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
        }

        cout<<sum<<endl;


    }
    return 0;
}
