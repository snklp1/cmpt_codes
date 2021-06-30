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

		for (int i = 0; i < n; ++i)
		{
			/* code */
			if(i==0)
			{
				cout<<n<<" ";
			}
			else
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}

    return 0;
}


//end
