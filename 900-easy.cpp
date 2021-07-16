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
		string s;
		cin>>s;

		int z=0;
		int o=0;

		for (int i = 0; i < s.length(); ++i)
		{
			/* code */
			if(s[i]=='0')
				z++;
			else
				o++;
		}

		int min;

		if(z<o)
			min = z;
		else
			min = o;

		if(min%2==0)
			cout<<"NET"<<endl;
		else
			 cout<<"DA"<<endl;
		

	}

    return 0;
}


//end
