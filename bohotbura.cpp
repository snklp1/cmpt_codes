#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int k;
	cin>>k;
	int arr[12];

	for (int i = 0; i < 12; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	sort(arr,arr+12);
	int sum =0;
	int months=0;

	for (int i = 11; i>=0; i--)
	{
		/* code */
		if(sum<k)
		{
			sum = sum + arr[i];
			months++;
		}
		else
		{
			break;
		}
	}

	if(months==12&&sum<k)
		months = -1;


	cout<<months<<endl;

    return 0;
}


//end
