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
		lint n,k;
		cin>>n>>k;


		//lint sections = n-1;
		lint section_number = k/(n-1);
		lint section_posiion = k%(n-1);

		if(section_posiion==0)
			section_posiion = -1;

		lint ans = (section_number*n) + section_posiion;
		cout<<ans<<endl;

	}

    return 0;
}


//end
