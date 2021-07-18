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
		int check[n+1]={0};
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];
			check[arr[i]]++;
		}

		sort(check,check+n+1);
		cout<<check[n]<<endl;
	}

    return 0;
}


//end
