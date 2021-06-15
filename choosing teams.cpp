#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,k;
    cin>>n>>k;
    int pos=0;
 
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp+k<=5)
        {
            pos++;
        }
    }
 
    cout<<pos/3<<endl;
    return 0;
}
