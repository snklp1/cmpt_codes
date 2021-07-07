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
		int n,d;
		cin>>n>>d;
		int arr[n];
		for (int i = 0; i < n; ++i)
		 {
		 	/* code */
		 	cin>>arr[i];
		 } 

		sort(arr, arr+n);

		if(arr[n-1]<=d)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			int sum = arr[0] + arr[1];
			if(sum<=d)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}

    return 0;
}


//end
