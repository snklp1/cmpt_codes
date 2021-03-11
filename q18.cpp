//very easy but small mistakes made me loose too much time
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sumits-string/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int desp= 0;
        
        for(int i=0;i<s.size()-1;i++)
        {
            int temp;
            temp = s[i]-s[i+1];
            if(temp==1||temp==-1||temp==25||temp==-25)
            {
                ;
            }
            else
            {
                desp++;
                break;
            }
        }
        if(desp>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


        
    }
    return 0;
}
