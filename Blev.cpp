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
		string s;
		cin>>s;
		string ans = "2020";
		if(s=="2020")
		{
			yes();
		}
		else
		{
			if(n<4)
			{
				no();
			}
			else
			{
				int fb = 0;
				int bb = 0;
				for (int i = 0; i < 4; ++i)
				{
					/* code */
					if(s[i]==ans[i])
					{
						fb++;
					}
					else
					{

						break;
					}
				}

				int temP_num = 3;

				for (int i = n-1; i >=n-4 ; i--)
				{
					/* code */
					if(s[i]==ans[temP_num])
					{
						bb++;
					}
					else
					{
						break;
					}

					temP_num--;
				}

				if(fb+bb>=4)
				{
					yes();
				}
				else
				{
					no();
				}
			}
		}
	}

    return 0;
}


//end
