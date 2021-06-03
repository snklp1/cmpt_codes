#include<bits/stdc++.h>
using namespace std;


int hitpoints[10001]={0};
int powerlevel[10001]={0};

/*
class dragon
{
    int hitpoints;
    int 
}
*/

//so I will use precomputation

int main()
{
    int n,s;
    cin>>s>>n;
    for(int i=1;i<n+1;i++)
    {
        int hp,pow;
        cin>>hp>>pow;

        hitpoints[hp]++;
        powerlevel[hp]=powerlevel[hp] + pow;
    }

    int kk=0;
/*
    for(int j=1;j<10001;j++)
    {
        cout<<"hp pos:"<<j<<"="<<hitpoints[j]<<","<<powerlevel[j]<<endl;
    }
*/
    for(int i=1;i<10001;i++)
    {
        if(hitpoints[i]>0)
        {
            if(s>i)
            {
                s = s + powerlevel[i];
            }
            else
            {
                kk++;
                break;
            }
        }
    }

    if(kk==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }




    return 0;

}

/*

std::qsort(ar, 10, sizeof(*ar),
        [](const void *arg1, const void *arg2)->int
        {
            int const *lhs = static_cast<int const*>(arg1);
            int const *rhs = static_cast<int const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });


*/
