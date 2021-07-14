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

	int arr[n];
	int num[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		//cout<<"index: "<<i+1<<" // pos: "<<i<<" // value: "<<arr[i]<<endl;
	}

	int max = 0;

	for (int i = 0; i<n; i++)
	{
		/* code */
		int l = 1;
		int pos = i;

		//cout<<"-----------------"<<endl;
		//cout<<pos<<endl;

		while(arr[pos]!=-1)
		{
			pos = arr[pos] -1;
			l++;
		}


		if(l>max)
			max = l;
		

	}

	int ans =max;
	cout<<ans<<endl;
    return 0;
}


//end
