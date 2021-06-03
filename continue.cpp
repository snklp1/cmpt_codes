#include<bits/stdc++.h>
using namespace std;


//class pack


int main()
{
    int n,m;
    cin>>n>>m;
    int task[m];
    for(int i=0;i<m;i++)
    {
        cin>>task[i];
    }

    int prev =1;
    int j=0;
    long long cost =0;

    while(j<m)
    {
        //cout<<cost<<endl;
        if(task[j]>=prev)
        {
            cost = cost + (task[j]-prev);
            prev = task[j];
            j++;
            continue;
        }
        
        if(task[j]<prev)
        {
            cost = cost + (n - prev) + task[j];
            //cout<<cost<<endl;
            prev = task[j];
            j++;
            continue;
        }
    }

    cout<<cost<<endl;

    return 0;

}


// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
