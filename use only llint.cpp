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
		llint n;
		cin>>n;
		vpint visit;
		for (llint i = 0; i < n; ++i)
		{
			/* code */
			pair<llint,llint> pp;
			cin>>pp.first;
			pp.second = i+1;
			visit.PB(pp);
		}
		sort(visit.begin(),visit.end());

		//to check
		/*
		for (int i = 0; i < n; ++i)
		{
			
			cout<<"for i = "<<i<<", "<<visit[i].first<<" "<<visit[i].second<<endl;
		}
		*/

		llint ans[n+1]={0};
		//cout<<endl;

		llint turn = 0;
		llint positive_side_expansion = 1;
		llint negative_side_expansion = -1;
		llint total_time_spent = 0;

		for (llint i = n-1; i>=0 ; i--)
		{
			/* code */
			if(turn==0)
			{
				ans[visit[i].second] = positive_side_expansion;
				total_time_spent = total_time_spent + 2*(positive_side_expansion)*visit[i].first;
				positive_side_expansion++;	
				turn = 1;
			}
			else
			{
				ans[visit[i].second] = negative_side_expansion;
				total_time_spent = total_time_spent + 2*(-1*negative_side_expansion)*visit[i].first;
				negative_side_expansion--;
				turn = 0;
			}
		}
		cout<<total_time_spent<<endl;;
		for (llint i = 0; i < n+1; ++i)
		{
			/* code */
			cout<<ans[i]<<" ";
		}
		

		cout<<endl;

	}

    return 0;
}


//end
