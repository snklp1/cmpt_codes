//https://www.hackerearth.com/problem/algorithm/mangoes/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>>w;
    int key=0;

    for(int i=1;i<=w/2;i++)
    {
        if(i%2!=0)
        {
            continue;
        }
        else
        {
            int temp = w - i;

            if(temp%2==0)
            {
                cout<<"YES";
                key++;
                break;
            }
        }

    }
    if(key==0)
        {
            cout<<"NO";
        }
    return 0;
}
