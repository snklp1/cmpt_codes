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
		int n,m;
		cin>>n>>m;
		int change = 0;
		char arr[n][m];
		for (int i = 0; i < n; ++i)
		 {
		 	/* code */
		 	for(int j=0;j< m;j++)
		 	{
		 		cin>>arr[i][j];
		 	}
		 }

		 for (int i = 0; i < n-1; ++i)
		{
			/* code */
			if(arr[i][m-1]=='R')
			{
				change++;
			}
		}

		for (int i = 0; i < m-1; ++i)
		{
			/* code */
			if(arr[n-1][i]=='D')
			{
				change++;
			}
		}


		cout<<change<<endl; 
		
	}

		

    return 0;
}


//end
