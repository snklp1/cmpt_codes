#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long int arr[n+1]={0};
    arr[0] = 1e9+10;
    int gdx[n+1]={0};
    int pos=0;

    int cnt = 0;

    int max = 1;
    for(int i=1;i<n+1;i++)
    {
        cin>>arr[i];
        pos++;
        if(arr[pos-1]>arr[pos])
        {
            //cout<<"val of pos: "<<pos<<endl;
            gdx[i]++;
        }  

        if(gdx[i]==1)
        {
            if(cnt>max)
            {
                max = cnt;
            }

            cnt = 1;
        }
        if(gdx[i]==0)
        {
            cnt++;
        }

        if(i==n)
        {
            if(cnt>max)
            {
                max = cnt;
            }
        }
    }
/*

    for(int i=1;i<n+1;i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;



    for(int i=1;i<n+1;i++)
    {
        cout<<gdx[i]<<" ";;
    }
    cout<<endl;
    //cout<<gdx[12];

*/

    cout<<max<<endl;





    return 0;

}
