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
		int n,x;
		cin>>n>>x;
		int floor = 1;
		int apt = 2;
		int ans = 0;
		while(1)
		{
			if(n<=apt)
			{
				ans = floor;
				break;
			}
			apt = apt + x;
			floor++;
		} 

		cout<<ans<<endl;
	}

    return 0;
}


//end
