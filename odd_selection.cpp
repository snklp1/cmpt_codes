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
		int n,x;
		cin>>n>>x;

		int even =0;
		int odd=0;

		vector <int> v;
		for (int i = 0; i < n; ++i)
		 {
		 	/* code */
		 	int temp_in;
		 	cin>>temp_in;
		 	v.push_back(temp_in);
		 	if(temp_in%2==0)
		 	{
		 		even++;
		 	}
		 	else
		 	{
		 		odd++;
		 	}

		 }

		 lint sum = 0;
		 string ans;
		 int swt = 0;

		 //cout<<"e:"<<even<<" || o:"<<odd<<endl;

		 if(odd==0)
		 {
		 	ans = "No";
		 }
		 else
		 {
		 	int temp = 0;
		 	while(temp<x)
		 	{
		 		if(temp==0)
		 		{
		 			odd--;
		 			swt = 1;
		 		}
		 		else
		 		{
		 			
		 			if((swt>0&&odd>1)&&x-temp>=2)
		 			{
		 					odd = odd -2;
		 					swt = 1;
		 					temp++;
		 			}
		 			else
		 			{
		 				if(swt>0&&even>0)
		 				{
		 					even--;
		 					swt=1;
		 				}
		 				else
		 				{
		 					//cout<<"debug"<<endl;
		 					ans = "No";
		 					break;
		 				}
		 			}
		 		}

		 		//4 odd // 5 even 


		 		temp++;
		 		/*
		 		cout<<"temp:"<<temp<<endl;
		 		cout<<"e:"<<even<<" || o:"<<odd<<endl;
		 		cout<<"swt:"<<swt<<endl;
		 		cout<<"_______"<<endl;
		 		*/
		 	}

		 	if(swt==1&&temp==x)
		 	{
		 		ans = "Yes";
		 	}
		 	else
		 	{
		 		//cout<<swt<<endl;
		 		//cout<<"debug"<<endl;
		 		ans = "No";
		 	}
		 }

		 cout<<ans<<endl;

		 
	}

    return 0;
}


//end
