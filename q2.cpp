//https://www.codechef.com/problems/FLOW006

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no_of_testcases;
    cin>>no_of_testcases;

    while(no_of_testcases--)
    {
        int n;
        cin>>n;
        int total_sum = 0;



        while(n>0)
        {
            total_sum = total_sum + n%10;
            n=n/10;
        }






        cout << total_sum << endl;
    }

    return 0;
}
