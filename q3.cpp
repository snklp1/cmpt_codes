//https://www.codechef.com/LRNDSA01/problems/FLOW007


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        int n;
        cin>>n;

        while(n>0)
        {
            cout<<n%10;
            n=n/10;
        }

        cout<<endl;


    }

    return 0;
}
