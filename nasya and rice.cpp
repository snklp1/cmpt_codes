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
		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d; 
		int fnd=0;
		//--//--//
		int g_low = (a-b)*n;
		int g_high= (a+b)*n;
		int t_high= c+d;
		int t_low = c-d;

		
		//--//--//

		if(g_low>t_high||g_high<t_low)
		{
			no();
		}
		else
		{
			yes();
		}
		
	}

    return 0;
}


//end
