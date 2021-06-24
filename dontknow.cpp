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
		lint a,b,c,n;
		cin>>a>>b>>c>>n;

		llint sum = a+b+c+n;
		int ok = 0;
		if(sum%3==0)
		{
			lint div = sum/3;
			if(div>=a&&div>=b&&div>=c)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}

		}
		else
		{
			cout<<"NO"<<endl;
		}

	}

    return 0;
}


//end
