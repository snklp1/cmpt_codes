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
		llint a,b,k,ans=0;
		cin>>a>>b>>k;
		if(k%2==0)
		{
			ans = (k/2)*(a-b);
		}
		else
		{
			ans = ((k-1)/2)*(a-b) + a;
		}
		cout<<ans<<endl;
	}

    return 0;
}


//end
