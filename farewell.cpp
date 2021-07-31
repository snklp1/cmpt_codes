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
		int n;
		cin>>n; 
		string b;
		cin>>b;
		//--//--//
		int current;
		string a = "";
		for (int i = 0; i < n; ++i)
		{
			if(i==0)
			{
				a = a + '1';
				if(b[i]=='1')
				{
					current = '2';
				}
				else
				{
					current = '1';
				}
			}
			else
			{
				if(current=='1')
				{
					if(b[i]=='1')
					{
						a = a+'1';
						current = '2';
					}
					else
					{
						a = a + '0';
						current = '0';
					}
				}
				else
				{	
					if(current=='2')
					{
						if(b[i]=='0')
						{
							a = a+'1';
							current='1';
						}
						else
						{
							a = a + '0';
							current = '1';
						}
					}
					else
					{
						if(b[i]=='0')
						{
							a = a+'1';
							current='1';
						}
						else
						{
							a = a + '1';
							current = '2';
						}
					}
						
					
				}
			}
		}
	

		cout<<a<<endl;
	}

    return 0;
}


//end
