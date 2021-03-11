//well i think the code is correct and it returns everything which the question asks but the leetcode judge just says, "Runtime Eror."
//

#include<bits/stdc++.h>
using namespace std;

    bool checkRecord(string s) 
    {
        int absent = 0; int late=0;
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]=='L')
            {
                if(s[i+1]=='L')
                {
                    if(s[i+2]=='L')
                    {
                        late++;
                        return false;
                    }  
                }
            }
        }
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='A')
            {
                absent++;
            }
        }
        if(absent>1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
        
        
    };

    int main()
    {
        string s;
        cin>>s;
        if(checkRecord(s))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

