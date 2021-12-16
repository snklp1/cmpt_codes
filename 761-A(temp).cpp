#include<bits/stdc++.h>
using namespace std;

//Author: snklp1
//TE: Sublime Text 3
//snpt(1) ok_start

#define llint         long long int
#define lint          long int
#define vint          vector<int>
#define vllint        vector<long long int> 
#define vpint         vector<pair<int,int>> 
#define vpllint       vector<pair<long long int, long long int>> 
#define MP            make_pair
#define PB            push_back
#define POB           pop_back
#define all(v)        (v).begin(),(v).end()

//int fun()

void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}

bool isSubstring(string s, string t)
{
    int tp = 0;
    for(int i=0;i<s.length();i++)
    {
        if(t[tp]==s[i])
        {
            tp++;
        }

    }

    if(tp==t.length())
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s, t;
        cin>>s>>t;

        sort(s.begin(),s.end());

        if(isSubstring(s,t))
        {
            string ans = "";
            string aux = "";

            int a = 0, b=0, c=0;


            if(t=="abc"||t=="cab"||t=="cba")
            {
                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='a')
                    {
                        a++;
                    }
                    else
                    {
                       if(s[i]=='b')
                       {
                            b++;
                       }
                        else
                        {
                            if(s[i]=='c')
                            {
                                c++;
                            }
                            else
                            {
                                aux = aux + s[i];
                            }   
                        } 
                    }                

                }

                while(a>0)
                {
                    ans = ans + 'a';
                    a--;
                }

                while(c>0)
                {
                    ans = ans + 'c';
                    c--;
                }

                while(b>0)
                {
                    ans = ans + 'b';
                    b--;
                }

                ans = ans + aux;
                cout<<ans<<endl;
            }
            else
            {
                for(int i=0;i<s.length();i++)
                {
                    if(s[i]=='a')
                    {
                        a++;
                    }
                    else
                    {
                       if(s[i]=='b')
                       {
                            b++;
                       }
                        else
                        {
                            if(s[i]=='c')
                            {
                                c++;
                            }
                            else
                            {
                                aux = aux + s[i];
                            }   
                        } 
                    }                

                }

                while(a>0)
                {
                    ans = ans + 'a';
                    a--;
                }

                while(b>0)
                {
                    ans = ans + 'b';
                    b--;
                }

                while(c>0)
                {
                    ans = ans + 'c';
                    c--;
                }

                

                ans = ans + aux;
                cout<<ans<<endl;
            }

        }
        else
        {
            cout<<s<<endl;
        }

            
    }
    return 0;
}


//end
