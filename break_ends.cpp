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
		string s;
		cin>>s;
		int ans = 0;
		int one =0;
		int zero = 0;
		int first=0, last=s.length()-1;
		for (int i = 0; i < s.length(); ++i)
		{
			if(one==0)
			{
				if(s[i]=='1')
				{
					first = i;
					one++;
				}

			}
			else
			{
				if(s[i]=='1')
				{
					one++;
					last  = i;
				}
			}
				
		}

		for(int j=first;j<=last;j++)
		{
			if(last-first>1&&one>=2)
			{
				if(s[j]=='0')
				{
					ans++;
				}
			}
		}

		cout<<ans<<endl;


	}

    return 0;
}


//end
