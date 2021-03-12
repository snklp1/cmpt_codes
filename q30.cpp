//https://www.hackerearth.com/problem/algorithm/gpl/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        long long int answer=0;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

       


        int mul = 0;

        for(int j=n-1; j>=0;j--)
        {
            long long int two_power = 1;
            for(int k = 0;k<mul;k++)
            {
                two_power = two_power*2;
            }
            if(a[j]=='0')
            {
                answer = answer + 0*two_power;
                mul++;
            }
            if(a[j]=='1')
            {
                answer = answer + 1*two_power;
                mul++;
            }
            

        }

        cout<<answer<<endl;

        
    }//testcase over.
    return 0;
}
