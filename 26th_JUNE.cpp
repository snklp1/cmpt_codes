#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int n,m;
	cin>>n>>m;

	char colors[n][m];

	int colored = 0;

	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m ;j++)
		{
			cin>>colors[i][j];
			if(colors[i][j]=='C'||colors[i][j]=='M'||colors[i][j]=='Y')
			{
				colored++;
			}

		}
	}

	if(colored)
	{
		cout<<"#Color"<<endl;
	}
	else
	{
		cout<<"#Black&White"<<endl;
	}

    return 0;
}


//end
