#include<bits/stdc++.h>
using namespace std;

//Author: snklp1
//TE: Sublime Text 3
//snpt(1) ok_start

#define llint     	long long int
#define lint      	long int
#define vint      	vector<int>
#define vllint    	vector<long long int> 
#define vpint     	vector<pair<int,int>> 
#define vpllint   	vector<pair<long long int, long long int>> 
#define MP        	make_pair
#define PB        	push_back
#define POB       	pop_back
#define all(v)    	(v).begin(),(v).end()

//int fun()

void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n; 
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];

		}

		sort(arr,arr+n);
		int even=0,odd=0;
		int con=0;
		int pair=0;

		for (int i = 0; i < n; ++i)
		{
			/* code */

			if(i==0)
			{
				;
			}
			else
			{
				if(arr[i]-arr[i-1]==1&&pair==0)
				{
					con++;
					pair=1;
				}
				else
				{
					if(arr[i]-arr[i-1]==1&&pair==1)
					{
						pair=0;
					}	
				}
			}

			if(arr[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}

		if(con*2==n)
		{
			yes();
		}
		else
		{
			if(even%2==0)
			{
				yes();
			}
			else
			{
				int space = con;
				int fnd=0;
				while(space>0)
				{
					even--;
					odd--;
					if(even%2==0)
					{
						yes();
						fnd++;
						break;
					}

					space--;
				}
				if(fnd==0)
				{
					no();
				}

			}
		}

		//cout<<"pairs:"<<con<<" o:"<<odd<<" e:"<<even<<endl;

		
	}

    return 0;
}


//end
