#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    string num;
    cin>>num;
    int i=1;

    int fun[10];

    while(i<10)
    {
        cin>>fun[i];
        i++;
    }

    int once_done = 0;

    for(int j=0;j<n;j++)
    {
        //cout<<j<<endl;
        int val = num[j];
        val = val - 48;
        
        //cout<<"val: "<<val<<endl;
        //cout<<"fun[val]: "<<fun[val]<<endl;
        if(fun[val]>val)
        {
            char temp;
            temp = fun[val] + 48;
            //cout<<"temp:"<<temp<<endl;
            num[j] = temp;
            once_done++;
        }

        if(fun[val]<val&&once_done>0)
        {
            break;
        }
    }

    //cout<<endl;

    for(int k=0;k<num.length();k++)
    {
        cout<<num[k];
    }

    return 0;
}
