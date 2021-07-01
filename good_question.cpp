#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int n,k;
	cin>>n>>k;
	int fence[n];
	int presum[n];
	//for loop for i	
	for(int i=0;i<n ;i++)
	{
		cin>>fence[i];
		if(i==0)
		{
			presum[i] = fence[i];
		}
		else
		{
			presum[i] = presum[i-1]+fence[i];
		}


	}

	int current=0;
	int index=-1;
	int s=0;

	for (int i = k-1; i <n ; ++i)
	{
		/* code */
		if(i==k-1)
		{
			current = presum[k-1];

		}
		else
		{
			if(presum[i]-presum[index]<current)
			{
				current = presum[i]-presum[index];
				s=index+1;
			}
		}

		index++;
	}



	cout<<s+1<<endl;



    return 0;
}


//end
