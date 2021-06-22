#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lint a,b;
		cin>>a>>b;

		llint moves =0;

		if(a>b)
		{
			if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
			{
				moves = 1;
			}
			else
			{
				if((a%2!=0&&b%2==0)||(a%2==0&&b%2!=0))
				{
					moves = 2;
				}
			}
		} 
		else
		{
			if(a-b==0)
			{
				moves = 0;
			}
			else
			{

				if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
				{
					moves = 2;
				}
				else
				{
					if((a%2!=0&&b%2==0)||(a%2==0&&b%2!=0))
					{
						moves = 1;
					}
				}
			}

		}

		cout<<moves<<endl;
	}

    return 0;
}


//end
//this question once i saw before thought was too tough. I thought it included DP or something.
