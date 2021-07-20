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
		int arr[n]={0};
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];
		}

		int add= 0;


		for (int j = 0; j < n-1; j++)
		{
			/* code */
			int l = arr[j]+arr[j+1];
			int m = max(arr[j],arr[j+1]);
			l = l - m;

			while(m>2*l)
			{
				add++;
				m = m/2 + m%2;
			}

		}

		cout<<add<<endl;
	}

    return 0;
}


//end
