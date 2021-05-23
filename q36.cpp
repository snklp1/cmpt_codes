//https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
 
    int anton = 0;
    int d=0;
    for(int i=0;i<a.length();i++)
    {
 
        if(a[i]=='A')
        {
            anton++;
        }
        else
        {
            d++;
        }
 
    }
    if(anton>d)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        if(d>anton)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;
    }
 
    return 0;
}
