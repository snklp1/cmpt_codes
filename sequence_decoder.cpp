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
		lint n;
		cin>>n;

		int a[2*n];

		int memory[50]={0};

		//for loop for i	
		 for(int i=0;i<2*n ;i++)
		 {
		 	cin>>a[i];
		 	if(i==0)
		 	{
		 		memory[a[i]-1]++;
		 		cout<<a[i]<<" ";
		 	}
		 	else
		 	{
		 		if(memory[a[i]-1]==0)
		 		{
		 			memory[a[i]-1]++;
		 			cout<<a[i]<<" ";
		 		}
		 		else
		 		{
		 			;
		 		}
		 	}
		 }

		 cout<<endl; 
	}

    return 0;
}


//end
