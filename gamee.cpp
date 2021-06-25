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

	int num[n];

	for (int i=0; i<n; i++)
	{
		cin>>num[i];
	}

	int sum1= 0;
	int sum2 =0;

	int temp = n;
	int back = n-1;
	int front = 0;
	int turn=0;

	while(temp--)
	{
		turn++;
		int big;
		if(num[front]>num[back])
		{
			big = num[front];
			front++;
		}
		else
		{
			big = num[back];
			back--;
		}

		if(turn%2==0)
		{
			sum2 = sum2 + big;
		}
		else
		{
			sum1 = sum1 + big;
		}

	}

	cout<<sum1<<" "<<sum2<<endl;

    return 0;
}


//end
