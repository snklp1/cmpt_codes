//https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/


#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int num;
    num = (a>b)? a : b;
    while(true)
    {
        num++;
        if(num%a==0&&num%b==0)
        {
            return num;
            break;
        }

    }
};

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int mul[1001];
    int num=-1;

    int i = 0;

    while(i<1001)
    {
        num++;
        if(num%a==0&&num%b!=0)
        {
            mul[i] = num;
            i++;
        }

        if(num%a!=0&&num%b==0)
        {
            mul[i] = num;
            i++;
        }

        if(num%a==0&&num%b==0)
        {
            mul[i] = num;
            i++;
        }
    }








    int start = mul[c];

    if(start%a==0&&start%b!=0)
    {
        while(start)
        {
            cout<<start<<" ";
            start = start-a;
        }
        cout<<0<<endl;
        return 0;


    }
    if(start%a!=0&&start%b==0)
    {
        while(start)
        {
            cout<<start<<" ";
            start = start-b;
        }
        cout<<0<<endl;
        return 0;


    }
    if(start%a==0&&start%b==0)
    {
        int dec = lcm(a,b);
        while(start)
        {
            cout<<start<<" ";
            start = start- dec;
        }
        cout<<0<<endl;
    return 0;

    }

    return 0;

}

