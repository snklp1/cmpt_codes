#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

/*

lint absdif(lint a, lint b)
{
	lint dif = a-b;
	if(dif<0)
		return -1*dif
	else
		return dif
}

*/


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lint n,m;
		cin>>n>>m;
		llint ans =0;

		if(n>=3)
		{
			ans = 2*m;
		}
		else
		{
			if(n==2)
				ans = m;
			else
				ans = 0;
		}

		cout<<ans<<endl;

	}

    return 0;
}


//end
