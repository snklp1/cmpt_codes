#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int az[26]={0};
    int za[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int place;
        place = s[i]-65;
        az[place]++;
    }
    string ss;
    cin>>ss;
    for(int j=0;j<ss.length();j++)
    {
        int place;
        place = ss[j]-65;
        az[place]++;
    }
    string pile;
    cin>>pile;
    for(int i=0;i<pile.length();i++)
    {
        int place;
        place = pile[i] - 65;
        za[place]++;
    }
    int no = 0;
    for(int k=0;k<26;k++)
    {
        
        if(az[k]!=za[k])
        {
            no++;
            break;
        }
        
        //cout<<k<<"-"<<az[k]<<"++++";
        //cout<<k<<"-"<<za[k]<<endl;
    }   

    if(no==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
