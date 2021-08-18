#include<bits/stdc++.h>
using namespace std;

//Author: snklp1
//TE: Sublime Text 3
//snpt(1) ok_start

#define llint     	long long int
#define lint      	long int
#define vint      	vector<int>
#define vllint    	vector<long long int> 
#define vpint     	vector<pair<int,int>> 
#define vpllint   	vector<pair<long long int, long long int>> 
#define MP        	make_pair
#define PB        	push_back
#define POB       	pop_back
#define all(v)    	(v).begin(),(v).end()

//int fun()

void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int xa, ya, xb, yb, xf, yf;
		cin>>xa>>ya;
		cin>>xb>>yb;
		cin>>xf>>yf;

		if(xa==xb)
		{
			if(xa==xf)
			{
				if((yf<ya&&yf>yb)||(yf<yb&&yf>ya))
				{
					int dif = (ya>yb)? (ya - yb)+2 : (yb - ya)+2;
					cout<<dif<<endl;
				}
				else
				{
					int dif = (ya>yb)? ya - yb : yb - ya;
					cout<<dif<<endl;
				}
				
					
			}
			else
			{
				int dif = (ya>yb)? ya - yb : yb - ya;
				cout<<dif<<endl;
			}
		}
		else
		{
			if(ya==yb)
			{
				if(ya==yf)
				{
					if((xf<xa&&xf>xb)||(xf>xa&&xf<xb))
					{
						int dif = (xa>xb)?(xa-xb)+2:(xb-xa)+2;
						cout<<dif<<endl;
					}
					else
					{
						int dif = (xa>xb)?xa-xb:xb-xa;
						cout<<dif<<endl;;
					}
						
				}
				else
				{
					int dif = (xa>xb)?xa-xb:xb-xa;
					cout<<dif<<endl;;
				}
					
			}
			else
			{
				int dif1 = (xa>xb)?xa-xb:xb-xa;
				int dif2 = (ya>yb)?ya-yb:yb-ya;
				cout<<dif1+dif2<<endl;
			}
		}

	}

    return 0;
}


//end
