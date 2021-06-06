#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;

        long int moves =0;
        
        if(a>b)
        {
            long int sub = 0;
            sub = a-b;
            //cout<<a<<endl;
            //cout<<sub<<endl;
            int i=0;
            while(sub>0)
            {
                int num = sub%10;
                sub = sub/10;
                if(i==0)
                {
                    if(num)
                    {
                        moves++;
                    }
                    i++;
                }
                else
                {
                    long int ten_power=1;
                    for(int m=0;m<i-1;m++)
                    {
                        ten_power = ten_power*10;
                    }

                    moves = moves + num*ten_power;

                    //cout<<ten_power<<endl;
                    i++;
                }   
                
            }
            
        }
        if(b>a)
        {
            long int sub = 0;
            sub = b-a;
            //cout<<sub<<endl;
            int i=0;
            while(sub>0)
            {
                int num = sub%10;
                //cout<<num<<endl;
                sub = sub/10;
                if(i==0)
                {
                    if(num)
                    {
                        moves++;
                    }
                    //cout<<moves<<endl;
                    i++;
                }
                else
                {
                    long int ten_power=1;
                    for(int m=0;m<i-1;m++)
                    {
                        ten_power = ten_power*10;
                    }

                    moves = moves + num*ten_power;

                    //cout<<ten_power<<endl;
                    i++;
                }  
            }
        }

        if(b==a)
        {
            moves = 0;
        }

        cout<<moves<<endl;
        
    }

    return 0;
    
}
