//this is the long code I wrote. 343 lines and still wrong
#include<bits/stdc++.h>
using namespace std;

class server
{
    public:
        int upvote;
        int downvote;

    server()
    {
        upvote = 0;
        downvote = 0;
    }

    void up()
    {
        upvote++;
    }

    void down()
    {
        downvote++;
    }

    void info()
    {
        cout<<"upvote status: "<<upvote<<endl;
        cout<<"downvote status: "<<downvote<<endl;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int coppa = 0;coppa < n;coppa++)
        {
            cin>>arr[coppa];
        }

        server server1;
        server server2;        

        for(int i=0;i<n;i++)
        {
            
            int temp1 = server1.upvote - server1.downvote;
            int temp2 = server2.upvote - server2.downvote;


            if(arr[i]==1)
            {
                
                if(temp1==0||temp2==0)
                {
                    if(temp1==0&&temp2<0)
                    {
                        server2.up();
                    }
                    if(temp2==0&&temp1<0)
                    {
                        server1.up();
                    }
                    if(temp1==0&&temp2>0)
                    {
                        server1.up();
                    }
                    if(temp2==0&&temp1>0)
                    {
                        server2.up();
                    }
                    if(temp1==0&&temp2==0)
                    {
                        server1.up();
                    }
                }
                if(temp1<0&&temp2<0)
                {
                    if(temp1==temp2)
                    {
                        server1.up();
                    }
                    else
                    {
                        if(temp1>temp2)
                        {
                            server2.up();
                        }
                        else
                        {
                            server1.up();
                        }
                    }
                }
                if(temp1>0&&temp2<0)
                {
                    server2.up();
                }

                if(temp1<0&&temp2>0)
                {
                    server1.up();
                }

                if(temp1>0&&temp2>0)
                {
                    if(temp1==temp2)
                    {
                        server1.up();
                    }
                    else
                    {
                        if(temp1<temp2)
                        {
                            server1.up();
                        }
                        else
                        {
                            server2.up();
                        }
                    }
                }
            }























            if(arr[i]==2)
            {
                if(temp1==0||temp2==0)
                {
                    if(temp1==0&&temp2<0)
                    {
                        server1.down();
                    }
                    if(temp2==0&&temp1<0)
                    {
                        server2.down();
                    }
                    if(temp1==0&&temp2>0)
                    {
                        server2.down();
                    }
                    if(temp2==0&&temp1>0)
                    {
                        server1.down();
                    }
                    if(temp1==0&&temp2==0)
                    {
                        server1.down();
                    }
                }
                if(temp1<0&&temp2<0)
                {
                    if(temp1==temp2)
                    {
                        server1.down();
                    }
                    else
                    {
                        if(temp1>temp2)
                        {
                            server1.down();
                        }
                        else
                        {
                            server2.down();
                        }
                    }
                }
                if(temp1>0&&temp2<0)
                {
                    server1.down();
                }

                if(temp1<0&&temp2>0)
                {
                    server2.down();
                }

                if(temp1>0&&temp2>0)
                {
                    if(temp1==temp2)
                    {
                        server1.down();
                    }
                    else
                    {
                        if(temp1<temp2)
                        {
                            server2.down();
                        }
                        else
                        {
                            server1.down();
                        }
                    }
                }
                
            }




























            if(arr[i]==3)
            {
                if(temp1==0||temp2==0)
                {
                    if(temp1==0&&temp2<0)
                    {
                        server1.up();
                    }
                    if(temp2==0&&temp1<0)
                    {
                        server2.up();
                    }
                    if(temp1==0&&temp2>0)
                    {
                        server1.up();
                    }
                    if(temp2==0&&temp1>0)
                    {
                        server2.up();
                    }
                    if(temp1==0&&temp2==0)
                    {
                        server1.up();
                    }
                }
                if(temp1<0&&temp2<0)
                {
                    if(temp1==temp2)
                    {
                        server1.down();
                    }
                    else
                    {
                        if(temp1>temp2)
                        {
                            server1.down();
                        }
                        else
                        {
                            server2.down();
                        }
                    }
                }
                if(temp1>0&&temp2<0)
                {
                    server1.up();
                }

                if(temp1<0&&temp2>0)
                {
                    server2.up();
                }

                if(temp1>0&&temp2>0)
                {
                    if(temp1==temp2)
                    {
                        server1.up();
                    }
                    else
                    {
                        if(temp1<temp2)
                        {
                            server1.up();
                        }
                        else
                        {
                            server2.up();
                        }
                    }
                }


            }
        }


        int ans = server1.upvote + server2.upvote;

        cout<<ans<<endl;





    }

    return 0;
}





//this is after the seeing the hint. just 66 lines. about 5 times lesser code and no confusion

#include<bits/stdc++.h>
using namespace std;

class server
{
    public:
        int upvote;
        int downvote;

    server()
    {
        upvote = 0;
        downvote = 0;
    }

    void up()
    {
        upvote++;
    }

    void down()
    {
        downvote++;
    }

    void info()
    {
        cout<<"upvote status: "<<upvote<<endl;
        cout<<"downvote status: "<<downvote<<endl;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        server s1;
        server s2;

        for(int o=0;o<n;o++)
        {
            cin>>a[o];
            if(a[o]==1)
            {
                s1.up();
            }
            if(a[o]==2)
            {
                s2.down();
            }
            if(a[o]==3)
            {
                s1.up();
            }
        }

        cout<<s1.upvote<<endl;
    }
}
