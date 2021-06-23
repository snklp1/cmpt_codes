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

	int arr[n][n];

	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<n ;j++)
		{
			if(i==0||j==0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 0;
			}
		}
	}

	int row = 1;
	int col = 1;
	

	while(row<n)
	{
		while(col<n)
		{
			int sum = 0;
			
			sum = arr[row-1][col] + arr[row][col-1];	
			
			arr[row][col] = sum;
			col++;
		}
		col = 1;
		row++;
	}
	

	/*
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<n ;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	*/


	cout<<arr[n-1][n-1]<<endl;

    return 0;
}


//end
