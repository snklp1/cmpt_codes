#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	string s;
	cin>>s;

	//cout<<s.length()<<endl;


	int ldng = 0;

	int i = 0;
	while(i<s.length())
	{
		if(ldng==0)
		{
			if(s[i]=='-')
			{
				ldng = 1;
			}
			else
			{
				cout<<"0";
			}
		}
		else
		{
			if(s[i]=='-')
			{
				cout<<"2";
				ldng=0;
			}
			else
			{
				cout<<"1";
				ldng=0;
			}
		}
		
		i++;
		//cout<<i<<endl;
	}

    return 0;
}


//end
