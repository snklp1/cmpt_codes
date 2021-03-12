//test q1
//https://www.hackerearth.com/problem/algorithm/capitalbaazi/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i =0 ; i< s.size();i++)
    {
        if(s[i]!=' ')
        {
            cout<<(char)(s[i]-32);
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
