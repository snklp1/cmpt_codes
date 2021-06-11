#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int students[n+1];
    int t[3]={0};

    int one[5000];
    int two[5000];
    int three[5000];

    for(int i=1;i<=n;i++)
    {
        cin>>students[i];
        

        if(students[i]==1)
        {
            one[t[0]]=i;
        }
        else
        {
            if(students[i]==2)
            {
                two[t[1]]=i;
            }
            else
            {
                if(students[i]==3)
                {
                    three[t[2]]=i;
                }
            }
        }


        t[students[i]-1]++;
    }

    int min;

    if(t[0]<=t[1]&&t[0]<=t[2])
    {
        min = t[0];
    }
    else
    {
        if(t[1]<=t[0]&&t[1]<=t[2])
        {
            min = t[1];
        }
        else
        {
            if(t[2]<=t[0]&&t[2]<=t[1])
            {
                min = t[2];
            }
        }
    }

    cout<<min<<endl;

    for(int i=0;i<min;i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }

    return 0;

    
}
