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

	int cnt=0;

	for (int i = 1; i < n; ++i)
	{
		/* code */
		int rem = n-i;
		if(rem%i==0)
		{
			cnt++;
			//cout<<"i:"<<i<<endl;
		}
	}

	cout<<cnt<<endl;

    return 0;
}


//end
