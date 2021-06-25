#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

lint fun(lint a, lint b)
{
	if(a<b)
		return a;
	else
		return b;
}

lint fun2(lint a, lint b)
{
	if(a>b)
		return a;
	else
		return b;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		llint x,y,z;
		cin>>x>>y>>z;

		lint a=fun(x,y);
		lint b=fun(y,z);
		lint c=fun(z,x);

		lint temp[3];
		temp[0] = x;
		temp[1] = y;
		temp[2] = z;

		lint ans[3];

		ans[0]=fun2(a,b);
		ans[1]=fun2(b,c);
		ans[2]=fun2(c,a);

		sort(ans, ans+3);
		sort(temp, temp+3);

		if(ans[0]==temp[0]&&ans[1]==temp[1]&&ans[2]==temp[2])
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<endl;; 

		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

    return 0;
}


//end
