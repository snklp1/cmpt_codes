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

		int bits[n+1]={0};
		int chose[n];

		int min = 2000000;

		//cout<<"_____________________"<<endl;

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>chose[i];
			//cout<<"entered value:"<<chose[i]<<endl;
			bits[chose[i]]++;
			//cout<<"number of chose[i]:"<<bits[chose[i]]<<endl;
		}
		/*

		for (int j = 0; j < n+1; ++j)
		{

			cout<<bits[j]<<endl;
		}
		*/




		int ans=-1;

		//cout<<"hellllo"<<endl;

		


		for (int k = 0; k < n; ++k)
		{
			/* code */
			if(chose[k]<=min&&bits[chose[k]]==1)
			{
				ans = k+1;
				min = chose[k];
			}
			else
			{
				;
			}
		}


		cout<<ans<<endl;


	}

    return 0;
}


//end
