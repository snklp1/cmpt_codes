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
		int n;
		cin>>n; 
		string s;
		cin>>s;
		int fnd = 0;
		int abc[26]={0};
		for (int i = 0; i < n; ++i)
		{
			int temp = s[i]-65;
			//cout<<temp<<endl;
			abc[temp]++;
			//cout<<"at i:"<<i<<", abc[temp]="<<abc[temp]<<endl;

			if(abc[temp]==1)
			{
				;
			}
			else
			{
				if(s[i]!=s[i-1])
				{
					fnd++;
					break;
				}
				else
				{
					;
				}
			}
		}

		if(fnd>0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}

	}

    return 0;
}


//end
