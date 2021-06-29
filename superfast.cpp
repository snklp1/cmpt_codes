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
		int h,m;
		cin>>h>>m;
		int hrs = 60*h;

		cout<<1440-hrs-m<<endl; 
	}

    return 0;
}


//end
