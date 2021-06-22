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
	int angle = 0;
	/*
	llint n1 = 3;
	while(angle<=178)
	{
		llint temp;
		temp = n1-2;
		temp = temp *180;
		temp = temp/n1;
		cout<<temp<<endl;
		n1++;
		angle = temp;
	}
	*/

	while(t--)
	{
		int n;
		cin>>n;

		int ans =0;
		int sum =0;
		int div;
		

		int dif = 180-n;
		//cout<<"DIF:"<<dif<<endl;
		float dec = 360/(float)dif;
		//cout<<"DEC:"<<dec<<endl;

		div = 360/dif;
		//cout<<"DIV:"<<div<<endl;

		if((float)div-dec==0)
			ans++;

		
		
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
		
	}

    return 0;
}


//end
