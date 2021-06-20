//the only question i did
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,q;
    cin>>n>>q;
    char s[n];
    int abc[n+1][26]={0};
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        int cc=s[i]-97;
        //cout<<cc<<endl;
        if(i==0)
        {
            abc[1][cc]=1;
        }
        else
        {
            for(int j=0;j<26;j++)
            {
                if(j==cc)
                {
                    abc[i+1][cc]=abc[i][cc]+1;
                }
                else
                {
                    abc[i+1][j] = abc[i][j];
                }
            }            
        }
 
    }
 
    //cout<<abc[n-1][0]<<" "<<abc[n-1][1]<<" "<<abc[n-1][2]<<endl;
 
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long int sum = 0;
        /*
        sum = abc[r][0] - abc[l-1][0];
        //cout<<sum<<endl;
        sum = sum + (abc[r][1] - abc[l-1][1])*2;
        sum = sum + (abc[r][2] - abc[l-1][2])*3;
        */
 
 
        for(int i=0;i<26;i++)
        {
            sum = sum + (abc[r][i] - abc[l-1][i])*(i+1);
        }
 
        cout<<sum<<endl;
 
    }
}
 
/*
1  0 0
1  2  0
 
 
*/
