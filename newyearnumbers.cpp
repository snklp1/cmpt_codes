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
		int n;
		cin>>n;

		int temp = n;
		if(n<2020)
		{
			cout<<"NO"<<endl;
		} 
		else
		{
			if(temp%2020==0||temp%2021==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				while(temp>=2020)
				{
					if(temp%2020==0||temp%2021==0)
					{
						temp = 0;
						break;
					}

					if(temp%10==0)
					{
						temp = temp -2020;
					}
					else
					{
						temp = temp -2021;
					}
				}

				if(temp==0)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
		}
	}

    return 0;
}


//end
