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
		if(n==1)
		{
			cout<<-1<<endl;
		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				/* code */
				if(i<n-1)
				{
					cout<<"7";
				}
				else
				{
					cout<<"4";
				}
			}
			cout<<endl;
		}

	}

    return 0;
}


//end