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
		int n,m;
		cin>>n>>m;

		lint ans = 0;

		if(n%2==0&&m%2==0)
		{
			ans = (n/2)*m;
		} 
		else
		{
			if(n%2==0&&m%2!=0)
			{
				ans = (n/2)*m;
			}
			else
			{
				if(n%2!=0&&m%2==0)
				{
					ans = (m/2)*n;
				}
				else
				{
					if(n%2!=0&&m%2!=0)
					{
						ans = (n/2)*m + m/2 + 1;
					}
					else
					{
						cout<<"FUCK_OFF"<<endl;
					}
				}
			}
		}

		cout<<ans<<endl;
	}

    return 0;
}


//end
