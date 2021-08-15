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
		lint max = -4;
		lint max_cnt = 0;
		lint pir[n] = {0};
		int pos = 0, pos_1 = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>pir[i];
			if(pir[i]>max)
			{
				max = pir[i];
				max_cnt = 1;
				pos_1 = i+1;
			}
			else
			{
				if(pir[i]==max)
				{
					max_cnt++;
				}/*
				else
				{
					if((i>0&&pir[i-1]==max)||(i<n-1&&pir[i+1]==max))
					{
						pos = i+1;
					}
				}
				*/
			}
		}

		

		//cout<<"max: "<<max<<" and num: "<<max_cnt<<" and max position:"<<pos_1<<" and available:"<<pos<<endl;;
		if(max_cnt==n)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(max_cnt==1)
			{
				cout<<pos_1<<endl;
			}
			else
			{
				for (int i = 0; i < n; ++i)
				{
					/* code */
					if(pir[i]!=max)
					{
						if(i>0&&pir[i-1]==max)
						{
							cout<<i<<endl;
							break;
						}
						else
						{
							if(i<n-1&&pir[i+1]==max)
							{
								cout<<i+2<<endl;
								break;
							}

						}
					}
				}
			}
		}
	}

    return 0;
}


//end
