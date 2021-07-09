#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		llint a,b;
		cin>>a>>b;

		llint dif = abs(a-b);

		if(dif==0)
		{
			cout<<"0 0"<<endl;
		}
		else
		{
			if(a%dif==0)
			{
				cout<<dif<<" "<<0<<endl;
			}
			else
			{
				llint temp1;
				llint temp2;

				temp1 = a%dif;
				temp2 = ((a/dif + 1)*dif)-a;

				//cout<<"temp1: "<<temp1<<" temp2: "<<temp2<<endl;

				if(temp1>temp2)
				{
					cout<<dif<<" "<<temp2<<endl;;
				}
				else
				{
					cout<<dif<<" "<<temp1<<endl;
				}
			}
		}


	}

    return 0;
}


//end
