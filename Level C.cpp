#include<bits/stdc++.h>
using namespace std;


int sum(int arr[], int m)
{
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}


int main()
{
    int m,s;
    cin>>m>>s;

    int big_num[m];
    int sml_num[m];

    for(int i=0;i<m;i++)
    {
        big_num[i] = 9;

        if(i==0)
        {
            sml_num[i] = 1;
        }
        else
        {
            sml_num[i] = 0;
        }
    }

    int dig = m-1;
    int found1 = 1;
    int found2 = 1;

    if(m==1)
    {
        if(s%10==s)
        {
            cout<<s<<" "<<s;
        }
        else
        {
            cout<<-1<<" "<<-1;
        }

    }
    else
    {
        while(sum(big_num,m)!=s)
        {
            if(big_num[dig]>0)
            {
                if(dig==0)
                {
                    if(big_num[0]==2)
                    {
                        big_num[0] = 1;
                        if(sum(big_num,m)==s)
                        {
                            break;
                        }
                        else
                        {
                            found1=0;
                            break;
                        }
                    }
                }
                big_num[dig]--;
            }
            else
            {
                dig--;
            }

            /*

            if(dig==-1)
            {
                found1=0;
                break;
            }

            */

        }


        int dig2 = m-1;
        

        while(sum(sml_num,m)!=s)
        {
            if(sml_num[dig2]<9)
            {
                if(dig2==0)
                {
                    if(sml_num[0]==8)
                    {
                        sml_num[0] = 9;
                        if(sum(sml_num,m)==s)
                        {
                            break;
                        }
                        else
                        {
                            found2=0;
                            break;
                        }
                    }
                }
                sml_num[dig2]++;

            }
            else
            {
                dig2--;
            }
            /*
            if(dig2==-1)
            {
                found2=0;
                break;
            }
            */

        }

        

        
        if(found2>0)
        {
            for(int i=0;i<m; i++)
            {
                cout<<sml_num[i];
            }

        }
        else
        {
            cout<<-1;
        }

        cout<<" ";

        if(found1>0)
        {
            for(int i=0;i<m; i++)
            {
                cout<<big_num[i];
            }
        }
        else
        {
            cout<<-1;
        }
    }

        




    return 0;
}
