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

	int num = n%4;

	int arr[4] = {6,8,4,2};

	if(n==0)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<arr[num];	
	}

	

    return 0;
}


//end
