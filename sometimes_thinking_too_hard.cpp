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
		vint grn;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int temp;
			cin>>temp;
			grn.PB(temp);
		}

		sort(grn.begin(),grn.end());
		int pnt = 0;
		int in_yard = 1;
		int ans = 1;
		while(pnt<n)
		{
			if(grn[pnt]<=in_yard)
			{
				in_yard++;
				ans = in_yard;
				pnt++;
			}
			else
			{	
				pnt++;
				in_yard++;
			}
		}	


		cout<<ans<<endl;
	}

    return 0;
}


//end
