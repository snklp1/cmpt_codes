#include<bits/stdc++.h>
using namespace std;

int pre[1000001]={0};

bool isComposite(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else
    {
        int start = 3;
        while(start<n)
        {
            if(n%start==0)
            {
                return true;
            }
            start=start+2;
        }
        return false;
    }
}

int main()
{
    int n;
    cin>>n;

    int a,b;
    
    int found =0;
    int start = 4;
    while(found==0)
    {
        if(isComposite(start))
        {
            if(isComposite(n-start))
            {
                //cout<<start<<" "<<n-start<<endl;
                a = start;
                b = n-start;
                found++;
            }
        }
        start++;
    }
    

    cout<<a<<" "<<b<<endl;

    return 0;
    
}
