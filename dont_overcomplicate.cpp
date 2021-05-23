//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;



bool isDistinct(int year)
{
    //cout<<year<<endl;
    int a[10]={0};

    
    for(int i=0;i<4;i++)
    {
        a[(year%10)]++;

        year = year / 10;
    }
    

    int temp = 10;

    

    while(temp)
    {
        //cout<<temp-1<<" "<<a[temp-1]<<endl;
        if(a[temp-1]>1)
        {
            return false;
            break;
        }
        temp--;
    }

    return true;
}


int main()
{
    int year;;
    cin>>year;

    int back = 9000;
    int notFound = 1;
    int ans = year + 1;



    while(notFound)
    {
        if(isDistinct(ans))
        {
            notFound++;
            break;
        }
        else
        {
            ans++;
        }
    }



   

    

    cout<<ans<<endl;
    return 0;
}
