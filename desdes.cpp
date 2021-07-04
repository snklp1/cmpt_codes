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
		int left = 0;
		int right = n-1;
		int turn  = 0;
		for (int i = 0; i < n; ++i)
		 {
		 	/* code */
		 	if(turn==0)
		 	{
		 		cout<<arr[left]<<" ";
		 		left++;
		 		turn=1;
		 	}
		 	else
		 	{
		 		turn = 0;
		 		cout<<arr[right]<<" ";
		 		right--;
		 	}
		 } 

		 cout<<endl;
	}

    return 0;
}


//end
