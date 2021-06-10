#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int dis[3];
 
    for(int i=0;i<3;i++)
    {
        cin>>dis[i];
 
    }
 
    sort(dis,dis+3);
 
    int distance = 0;
    distance = dis[2]-dis[0];
    cout<<distance<<endl;
    return 0;
    
}
