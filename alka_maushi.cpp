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

		int arr[n];

		int even = 0;
		int odd = 0;

		for (int i = 0; i < n; ++i)
		 {
		 	/* code */
		 	cin>>arr[i];
		 	if(arr[i]%2==0)
		 	{
		 		even++;
		 	}
		 	else
		 	{
		 		odd++;
		 	}
		 }

		 if(n%2==0)
		 {
		 	if(odd>0)
		 	{
		 		if(even>0)
		 		{
		 			cout<<"YES"<<endl;
		 		}
		 		else
		 		{
		 			cout<<"NO"<<endl;
		 		}
		 	}
		 	else
		 	{
		 		cout<<"NO"<<endl;
		 	}
		 }
		 else
		 {
		 	if(odd>0)
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
