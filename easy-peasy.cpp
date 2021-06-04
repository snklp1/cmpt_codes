#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin>>n>>m;

    int ans =n;

    for(int i=1;i<=ans;i++)
    {
        if(i%m==0)
            ans++;
    }

    cout<<ans<<endl;
    return 0;

}

