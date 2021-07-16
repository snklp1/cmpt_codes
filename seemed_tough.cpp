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
		string s;
		cin>>s;

		int r=0;
		int l=0;

		for (int i = 0; i < n; ++i)
		{
			/* code */
			if(s[i]=='L')
			{
				l++;
			}
			else
			{
				r++;
			}
		}

		llint ans = 0;
		ans = l+r+1;
		cout<<ans<<endl;
	

    return 0;
}


//end
