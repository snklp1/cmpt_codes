#include<bits/stdc++.h>
using namespace std;


int max(int prev, int new1)
{
    if(new1>prev)
        return new1;
    else
        return prev;
}

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    //using the idea of tuts,yt.
    //x+y+z(to be maximized)
    //ax+by+cz=n(condition)

    int ans=0;


    for(int x=0;x<=4000;x++)
    {
        for(int y=0;y<=4000;y++)
        {
            int zc = n - (a*x + b*y);
            if(zc<0)
                break;
            double z = (zc/(double)c);
            if(z==(int)z)
                ans = max(ans,(int)x+y+z);
        }
    }
    

    cout<<ans<<endl;
    return 0;

}
