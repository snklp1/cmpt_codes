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
	llint d1,d2,d3;
	cin>>d1>>d2>>d3;

	llint pos1=(2*d1)+(2*d2), pos2 = d1+d2+d3, pos3 = (2*d1)+(2*d3), pos4 = (2*d2)+(2*d3);
	pos1 = min(pos1,pos2);
	pos1 = min(pos1,pos3);
	pos1 = min(pos1,pos4);

	cout<<pos1<<endl;



    return 0;
}


//end
