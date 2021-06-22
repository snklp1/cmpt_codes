//failed code.
//cause it was for TCL language.
#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

int fun(int n)
{
	if(n==1)
		return 1;
	else
	{
		return n * fun(n-1);
	}
}


int main()
{
	int t;
	cin>>t;
	
	int ans = fun(t);

	cout<<ans<<endl;

    return 0;
}


//end
