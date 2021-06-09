#include<bits/stdc++.h>
using namespace std;

//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 ... 
// 100000 100002
//       1      2*10^5 + 1
// split point 10^5
//sum = 2*10^5+2



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int half = n/2;

        if(half%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            //even front = e_f
            int e_f = 2;
            int e_l = 200000;

            int o_f = 1;
            int o_l = 200001;

            while(e_f<=half)
            {
                cout<<e_f<<" "<<e_l<<" ";
                e_f++;
                e_f++;
                e_l--;
                e_l--;
            }

            while(o_f<=half)
            {
                cout<<o_f<<" "<<o_l<<" ";
                o_f++;
                o_f++;
                o_l--;
                o_l--;
            }

            /*
            for(int i=0;i<n/2;i++)
            {
                cout<<even[i]<<" ";
            }
            for(int j=0;j<n/2;j++)
            {
                cout<<odd[j]<<" ";
            }
            */
            cout<<endl;
        }

    }


    return 0;
    
}
