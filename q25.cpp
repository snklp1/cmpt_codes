#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='U')
            y++;
        if(s[i]=='D')
            y--;
        if(s[i]=='L')
            x--;
        if(s[i]=='R')
            x++;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
