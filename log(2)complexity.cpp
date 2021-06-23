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
		int w,h;
		lint n;
		cin>>w>>h>>n;

		llint w2 =1; 
		llint h2 =1;

		while(w%2==0)
		{
			w2 = w2*2;
			w = w/2;
		}

		while(h%2==0)
		{
			h2 = h2*2;
			h = h/2;
		}

		if(h2*w2>=n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

    return 0;
}


//end
