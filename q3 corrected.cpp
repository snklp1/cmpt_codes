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


        int no_of_digits=0;
        int k = n;

        while(k>0)
        {
            k = k/10;
            no_of_digits++;
        }

        int final=0;

        while(n>0)
        {
            int temp2 = no_of_digits;
            int temp1=1;
            while(temp2--)
            {
                temp1 = temp1*10;
            }
            
            int digit = n%10;
            final =  final + digit*temp1;
         
            no_of_digits--;
            n=n/10;
        }

        cout<<final/10<<endl;


    }

    return 0;
}
