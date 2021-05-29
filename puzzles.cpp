#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int puz[m];
    for(int i=0;i<m;i++)
    {
        cin>>puz[i];
    }

    sort(puz,puz+m);

    int dif=n-1;
/*
    for(int i=0;i<m;i++)
    {
        cout<<puz[i]<<" ";
    }
*/
    int min_dif = 1000;

    for(int ss=0;ss+dif<m;ss++)
    {
        if(min_dif>(puz[ss+dif] - puz[ss]))
        {
            min_dif = puz[ss+dif] - puz[ss];    
        }
    }

    cout<<min_dif<<endl;

    return 0;
}
