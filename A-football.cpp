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
	int temp = n;
	string t1="0000",t2="000";
	int t1cnt = 0;
	int t2cnt = 0;
	while(temp)
	{
		string s;
		cin>>s;

		if(t1=="0000")
		{
			t1 = s;
			t1cnt++;
		}
		else
		{
			if(s==t1)
			{
				t1cnt++;
			}
			else
			{
				if(t2=="000")
				{
					t2 = s;
					t2cnt++;
				}
				else
				{
					if(t2 == s)
					{
						t2cnt++;
					}
					else
					{
						cout<<"fuck me"<<endl;
						//impossible condition
					}
				}
			}
		}



		/*
		if(temp==n)
		{
			t1 = s;
			t1cnt++;
		}
		else
		{
			if(t1!=s&&t2=="000")
			{
				t2 = s;
				t2cnt++;
			}

		}
		*/
		temp--;
	}

	if(t1cnt>t2cnt)
	{
		cout<<t1<<endl;
	}
	else
	{
		cout<<t2<<endl;
	}


    return 0;
}


//end
