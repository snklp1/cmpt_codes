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
 
void yes(){cout<<"Yes"<<endl;}
void no(){cout<<"No"<<endl;}
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n; 
		vint v;
		int odd=0, even =0;
		//--//--//
		for (int i = 0; i < 2*n; ++i)
		{
			/* code */
			int temp;
			cin>>temp;
			v.PB(temp);
			if(temp%2==0)
			{
				odd++;
			}
			else
			{
				even++;
			}	
		}
 
 
		if(odd==n)
		{
			yes();
		}
		else
		{
			no();
		}
 
 
		
 
		//--//--//
 
		//cout<<ans<<endl;
	}
 
    return 0;
}
 
 
//end
