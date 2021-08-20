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
		vint v;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int temp;
			cin>>temp;
			v.PB(temp);
		}

		int j=1;
		llint max = 0;
		for (int i = 0; i < n-1; ++i)
		{
			/* code */
			llint prod = (1ll*v[i])*v[j];
			//cout<<prod<<endl;
			if(max<prod)
			{
				max = prod;
			}

			j++;
		}

		cout<<max<<endl;

	}

    return 0;
}


//end
