#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	string s,a,b,c,d,e;
	cin>>s;
	char xx[14];
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cin>>xx[i];
	}

	int yes =0;
	int u=0;
	int y=1;

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		if(s[0]==xx[u])
		{
			yes++;
			break;
		}

		if(s[1]==xx[y])
		{
			yes++;
			break;
		}

		u = u + 2;
		y = y + 2;
	}

	if(yes>0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}


    return 0;
}


//end
