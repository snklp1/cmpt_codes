#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	//   10 3  5

	int ans =0;
	float div = (float)b/m;


	while(n>0)
	{
		if(n>=m)
		{
			if(div<(float)a)
			{
				n = n -m;
				ans = ans + b;
			}
			else
			{
				n = n-1;
				ans = ans + a;
			}
		}
		else
		{
			if(b<n*a)
			{
				ans = ans + b;
				n = 0;
			}
			else
			{
				ans = ans + n*a;
				n = 0;
			}
		}

	}


	cout<<ans<<endl;
	
		


    return 0;
}


//end
