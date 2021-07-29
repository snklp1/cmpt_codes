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
		vint odd;
		vint even;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int temp;
			cin>>temp;
			if(temp%2==0)
			{
				even.PB(temp);
			}
			else
			{
				odd.PB(temp);
			}
		}

		for (std::vector<int>::iterator i = even.begin(); i != even.end(); ++i)
		{
			cout<<(*i)<<" ";
		}

		for (std::vector<int>::iterator i = odd.begin(); i != odd.end(); ++i)
		{
			cout<<(*i)<<" ";
		}

		cout<<endl;
	}

    return 0;
}


//end
