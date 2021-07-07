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
		lint a,b,n;
		cin>>a>>b>>n;
		lint step = 0;
		int one  = 0;
		while(a<=n&&b<=n)
		{
			if(a<b)
				a = a+b;
			else
				b = b+a;

			//cout<<"a:"<<a<<" b:"<<b<<endl;

			step++;
		}

		cout<<step<<endl;

	}

    return 0;
}


//end
