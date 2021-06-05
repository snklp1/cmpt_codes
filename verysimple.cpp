#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max;
    int low;
    int amz = 0;
    for(int i=0;i<n;i++)
    {
        int pnt;
        cin>>pnt;
        if(i==0)
        {
            max = pnt;
            low = pnt;
        }
        else
        {
            if(pnt>max)
            {
                amz++;
                max = pnt;
            }
            if(pnt<low)
            {
                amz++;
                low = pnt;
            }
        }
    }

    cout<<amz;
    return 0;
    
}
