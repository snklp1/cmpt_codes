#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	string s;
	cin>>s;
	int t = s.length();
	int current = 97;
	int i = 0;

	

	int moves =0;
	while(i<t)
	{
		char g;
		g = s[i];

		int h;
		h = (int)g;

		//cout<<g<<endl;
		//cout<<h<<endl;

		int fd;
		int bd;

		//cout<<"_____________"<<endl;

		//cout<<current<<endl;
		//cout<<g<<" "<<h<<endl;

		//cout<<moves<<endl;




		if(h>current)
		{
			fd = h - current;
			bd = (current-97) + (122-h) + 1;
		}
		else
		{
			if(h==current)
			{
				fd=0;
				bd=0;
			}
			else
			{
				if(h<current)
				{
					fd = current - h;
					bd = (122-current) + (h-97) + 1;
				}
			}
		}

		current  = h;

		if(fd<bd)
		{
			moves  = moves + fd;
		}
		else
		{
			moves  = moves + bd;
		}

		//cout<<"moves:"<<moves<<endl;

		i++;
	}

	cout<<moves<<endl;

    return 0;
}


//end
