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

llint lcm(llint a, llint b)
{
	return (a*b)/(std::__gcd(a,b));
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		llint x,y,a,b;
		cin>>x>>y>>a>>b;
		llint d = y-x;
		//x + aT = y - bT
		//T(a+b) = y - x
		llint rel_speed = a+b;
		if(d%rel_speed==0)
		{
			cout<<d/rel_speed<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
}


//end
