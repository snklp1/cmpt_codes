#include<bits/stdc++.h>
using namespace std;


string shift(string s, int l, int r, int k)
{
    string g;
    int gg = r-l+1;
    char alto[gg];
    char done[gg];
    int cnt = 0;
    for(int i=l-1;i<r;i++)
    {
        alto[cnt] = s[i];
        cnt++;
    }
    int move = k%(gg);
    for(int j=0;j<gg;j++)
    {
        if(j+move>=gg)
        {
            done[j+move-gg]=alto[j];
        }
        else
        {
            done[j+move] = alto[j];
        }
    }
    int cnt2 = 0;
    for(int o=l-1;o<r;o++)
    {
        s[o] = done[cnt2];
        cnt2++;
    }
    return s;
}


int main()
{
    string s;
    cin>>s;

    int m;
    cin>>m;

    while(m--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        s = shift(s,l,r,k);    
    }
    cout<<s<<endl;
}
