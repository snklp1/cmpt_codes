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
		int n;
		cin>>n; 

		lint arr[n];

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];
		}

		sort(arr, arr+n);

		int largest = 0;
		int longest=0;

		for (int i = 0; i < n; ++i)
		{
			/* code */
			if(arr[i]>largest)
			{
				longest++;
				largest= arr[i];
			}
			else
			{
				;
			}
		}

		cout<<longest<<endl;
	}

    return 0;
}


//end
