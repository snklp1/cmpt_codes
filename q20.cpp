//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        string s,j;
        cin>>j;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            for(int k=0;k<j.size();k++)
            {
                if(s[i]==j[k])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

