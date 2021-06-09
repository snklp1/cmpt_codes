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
        string b;
        cin>>b;
        int start =0;
        string a;
        while(start<=b.length())
         {
            char aa = b[start];
            //cout<<aa<<endl;
            if(start==0||start==b.length())
            {
                a.push_back(aa);
            }
                
            else
            {
                //strncat(a, &aa, 1);
                a.push_back(aa);
                start++;
            }
            start++;

         }

         cout<<a<<endl;

    }


    return 0;
    
}
