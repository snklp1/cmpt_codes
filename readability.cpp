#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int n;
	cin>>n;

	string state;
	string combi;

	cin>>state;
	cin>>combi;

	int moves=0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		int pos;
		int des;

		pos = (int)state[i]-48;
		//cout<<pos<<endl;

		des = (int)combi[i]-48;
		//cout<<des<<endl;

		int front;
		int back;

		if(pos>des)
		{
			front = pos - des;
			back = (10-pos) + (des-0);
				if(front<back)
				{
					moves = moves + front;
				}
				else
				{
					moves = moves + back;
				}

		}
		else
		{
			if(pos<des)
			{
				front = des - pos;
				back = (pos-0)+(10-des);
				if(front<back)
				{
					moves = moves + front;
				}
				else
				{
					moves = moves + back;
				}
			}
			else
			{
				moves  = moves;
			}
		}


	}

	cout<<moves<<endl;

    return 0;
}


//end
