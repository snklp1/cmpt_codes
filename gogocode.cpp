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
		llint ans = -1;
		//--//--//
		vint v;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int temp;
			cin>>temp;
			v.PB(temp);
			sum = sum + temp;
		}

		int div = sum/n;

		if(sum%n==0)
		{
			ans = 0;
			while(n--)
			{
				if(v[n]>div)
				{
					ans++;
				}
			}
		}



		//--//--//

		cout<<ans<<endl;
	}

    return 0;
}


//end
