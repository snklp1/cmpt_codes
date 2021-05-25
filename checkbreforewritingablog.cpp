#include<bits/stdc++.h>
using namespace std;
 
 
string chnage(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i] = s[i] + 32;
            //cout<<"i:"<<i<<s[i]<<endl;
            continue;
        }
        if(s[i]>=97&&s[i]<=122)
        {
            s[i] = s[i] - 32;
            //cout<<"i:"<<i<<s[i]<<endl;
        }
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    if(s[0]>=97)
    {
        if(s.length()==1)
        {
            s = chnage(s);
            cout<<s<<endl;
            return 0;
        }
        if(s[1]>=97)
        {
            cout<<s<<endl;
            return 0;
        }
        int cap = 1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]<=90)
            {
                cap++;
            }
            else
            {
                cout<<s<<endl;
                return 0;
            }
        }
        if(cap==s.length())
        {
            //cout<<cap<<endl;
            s = chnage(s);
        }
        cout<<s<<endl;
        return 0;
    }
    if(s[0]<=90)
    {
        if(s.length()==1)
        {
            s = chnage(s);
            cout<<s<<endl;
            return 0;
        }
 
        if(s[1]>=97)
        {
            cout<<s<<endl;
            return 0;
        }
 
        int cnt =1;
 
        for(int i=1;i<s.length();i++)
        {
            if(s[i]<=90)
            {
                cnt++;
            }
            else
            {
                cout<<s<<endl;
                return 0;
            }
        }
 
        if(cnt==s.length())
        {
            s = chnage(s);
            cout<<s<<endl;
            return 0;
        }
 
    }
    return 0;
}
