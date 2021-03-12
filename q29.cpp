//
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int a[n];
        int no_use = 0;

        for(int i1=0;i1<n;i1++)
        {
            cin>>a[i1];
            if(a[i1]==0)
            {
                cout<<"NO"<<endl;
                no_use++;
                break;
            }
        }

        if(no_use>0)
            {
                break;
            }//breaking loop if any number 0

        long long int prod = 1;

        for(int i=0;i<n;i++)
        {
            prod = prod * a[i];
        }//finding the product

        int signf_not_found = 1;
        int mul=1;

        

        while(signf_not_found)
        {
            if(prod%(10*mul)==0)
            {
                mul++;
            }
            else
            {
                signf_not_found = 0;
                if(prod%(10*mul)==2||prod%(10*mul)==3||prod%(10*mul)==5)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

        
    }//testcase over.
    return 0;
}
