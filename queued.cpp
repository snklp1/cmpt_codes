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
		lint n;
		cin>>n; 

		
		int moves = -1;

		while(n>=1)
		{
			moves++;
			if(n==1)
			{
				break;
			}
			else
			{
				if(n%6==0)
				{
					n=n/6;
				}
				else
				{
					if(n%3==0)
					{
						n=n*2;
					}
					else
					{
						//cout<<-1<<endl;
						moves  = -1;
						break;
					}
				}
			}
		}

		cout<<moves<<endl;
	}

    return 0;
}

//https://codeforces.com/problemset/problem/1374/B


//end
