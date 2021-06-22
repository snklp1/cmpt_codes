#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()


int main()
{
	int a1, a2, a3, a4;
	cin>>a1>>a2>>a3>>a4;
	string s;
	cin>>s;
	lint sum =0;
	//for loop for i	
	for(int i=0;i<s.length();i++)
	{
		lint temp;
		if(s[i]=='1')
			temp = a1;
		if(s[i]=='2')
			temp = a2;
		if(s[i]=='3')
			temp = a3;
		if(s[i]=='4')
			temp = a4;

		sum = sum + temp;
	}

	cout<<sum<<endl;
    return 0;
}


//end
