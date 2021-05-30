#include<bits/stdc++.h>
using namespace std;


void sig(long long int b[], int skip1, int skip2,int size)
{
    for(int i=0;i<size;i++)
    {
        if(i!=skip1&&i!=skip2)
        {
            cout<<b[i]<<" ";
        }

    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int b[n+2];
        long long int a[n];
        long long int sum = 0;
        long long int temp;
        int found =0;
        int ai = 0;

        for(int k=0;k<n+2;k++)
        {
            cin>>b[k];
            sum = sum + b[k];
        }

        ai=0;

        //long long int temp1;
        //long long int temp2;

        sort(b,b+n+2);
        

        

        if((sum-b[n])-b[n+1]==b[n]||(sum-b[n])-b[n+1]==b[n+1])
        {
            found++;
            sig(b,n+1,n,n+2);
            continue;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                temp = (sum - b[i]) - b[n+1];
                if(temp==b[n+1])
                {
                    sig(b,i,n+1,n+2);
                    found++;
                    break;
                }
            }
        }
        if(found==0)
        {
            cout<<-1<<endl;
        }
    }


    return 0;

}
