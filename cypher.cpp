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
	int n;
	cin>>n;
	string s;
	string ans = "";
	cin>>s;
	int plus = 0;
	for(int i=0;i<s.length();i++)
	{
		char temp;
		i = i+plus;
		temp = s[i];
		ans = ans + temp;
		plus++;
	}

	cout<<ans<<endl;
    return 0;
}


//end
