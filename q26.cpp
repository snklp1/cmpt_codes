#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    int sum1 = 0, sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            sum = sum + a[i][j];
            if((i%2==0&&j%2==0)||(i==1&&j==1))
            {
                sum1 = sum1 + a[i][j];
            }
        }
    }
    cout<<sum1<<endl;
    cout<<sum-sum1<<endl;
    return 0;
    
}
