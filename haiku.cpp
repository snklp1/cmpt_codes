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
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	
	int cnt1=0,cnt2=0,cnt3=0;

	for (int i = 0; i < s1.length(); ++i)
	{
		/* code */
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
		{
			cnt1++;
		}
	}
	if(cnt1==5)
	{
		for (int i = 0; i <s2.length(); ++i)
		{
			/* code */
			if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
				{
					cnt2++;
				}
		}

		if(cnt2==7)
		{
			for (int i = 0; i < s3.length(); ++i)
			{
				/* code */
				if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='o'||s3[i]=='u')
						{
							cnt3++;
						}

			}

			if(cnt3==5)
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
	else
	{
		no();
	}
}


//end
