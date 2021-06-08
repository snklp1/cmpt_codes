#include<bits/stdc++.h>
using namespace std;

//in



int main()
{
    int n;
    cin>>n;

    int police=0;
    int crime=0;


    for(int i=0;i<n;i++)
    {
        int temp_num;
        cin>>temp_num;
        /*
        cout<<"iteration: "<<i<<endl;
        cout<<crime<<endl;
        cout<<police<<endl;
        cout<<endl;
        */

        if(temp_num==-1)
        {
            if(police>0)
            {
                police--;
            }
            else
            {
                crime++;
            }

        }
        else
        {
            police=police+temp_num;
        }
    }


    cout<<crime<<endl;


    return 0;
    
}
