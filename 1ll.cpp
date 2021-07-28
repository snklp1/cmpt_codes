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
		lint a,b,n,s;
		cin>>a>>b>>n>>s; 
		
		if(s%n<=b)
		{

			llint long_a = 1;
			llint mul = ((long_a*a)*n)+b;
			llint su = (llint)s;

			//remember th importance of 1ll

			if(mul>=su)
			{
				yes();
			}
			else
			{
				no();
			}
		}
		else
		{
			no();
		}
	}

    return 0;
}


//end
