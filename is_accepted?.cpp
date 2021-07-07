#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	char shift;
	cin>>shift;
	int x;
	if(shift == 'R')
	{
		x=-1;
	}
	else
	{
		x=1;
	}

	string s;
	cin>>s;

	string line1 = "qwertyuiop";
	string line2 = "asdfghjkl;";
	string line3 = "zxcvbnm,./";

	for (int i = 0; i < s.length(); ++i)
	{
		/* code */
		int fnd = 0;

		for(int j=0;j<10 ;j++)
		{
			if(s[i]==line1[j])
			{
				fnd++;
				cout<<line1[j+x];
			}
		}

		if(fnd==0)
		{
			for(int j=0;j<10 ;j++)
			{
				if(s[i]==line2[j])
				{
					fnd++;
					cout<<line2[j+x];
				}
			}
		}

		if(fnd==0)
		{
			for(int j=0;j<10;j++)
			{
				if(s[i]==line3[j])
				{
					fnd++;
					cout<<line3[j+x];
				}
			}
		}
	}

    return 0;
}


//end
