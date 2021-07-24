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
	int n;
	cin>>n;
	vint v;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int temp;
		cin>>temp;
		v.PB(temp);
	}

	for (int i = 0; i < n; ++i)
	{
		int max,min;
		/* code */
		if(i==0)
		{
			max = v[n-1]-v[i];
			min = v[1] - v[0];
		}
		else
		{
			if(i==n-1)
			{
				max = v[i] - v[0];
				min = v[i] - v[n-2];
			}
			else
			{
				int min1 = v[i+1] - v[i];
				int min2 = v[i] - v[i-1];
				int max1 = v[i] - v[0];
				int max2 = v[n-1] - v[i];

				max = std::max(max1,max2);
				min = std::min(min1,min2);
			}
		}


		cout<<min<<" "<<max<<endl;
	}
    return 0;
}


//end
