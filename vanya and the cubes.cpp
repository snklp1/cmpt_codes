#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int n;
	cin>>n;

	int i = 1;
	int to = 0;
	int lev = 0;
	int h=0;
	while(n>0)
	{
		lev = lev + i;
		if(lev>n)
			break;
		n=n-lev;
		to = lev + to;
		i++;
		h++;
	}
	//cout<<endl;

	cout<<h<<endl;

    return 0;
}


//end
