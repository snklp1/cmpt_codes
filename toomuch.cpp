#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string ans;
    int pntr=-1;
    int store;

    if(s.length()<3)
    {
        cout<<s<<endl;
        return 0;
    }

    int WUB_enc = -1;

    int end_done=0;

    for(int i=0;i<s.length()-2;i++)
    {
        //cout<<s[i]<<endl;
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(pntr==1)
            {
                cout<<" ";
            }
            i=i+2;
            pntr = 0;
            store = i;
            WUB_enc=0;
            //cout<<i<<endl; 
        }
        else
        {
            cout<<s[i];
            pntr=1;
            store = i;
            WUB_enc=1;
        }


    }

    //cout<<store;


    if(store==s.length()-3&&WUB_enc<1)
    {
        cout<<s[s.length()-2]<<s[s.length()-1];
    }


    if(store==s.length()-2&&WUB_enc<1)
    {
        cout<<s[s.length()-1];
    }





    if(pntr>0)
    {
        for(int i=store+1;i<s.length();i++)
        {
            cout<<s[i];
        }
    }

    /*


    if(end_done==0&&(s[s.length()-3]!='W'&&s[s.length()-2]!='U'&&s[s.length()-1]!='B'))
    {
        cout<<s[s.length()-2]<<s[s.length()-1];
    }

    */



    return 0;




}
