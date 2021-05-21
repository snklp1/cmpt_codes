#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;

	int arr[3]={0};

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			arr[0]++;
		}
		if(s[i]=='2')
		{
			arr[1]++;
		}
		if(s[i]=='3')
		{
			arr[2]++;
		}
	}

	int one,two, three;
	one = arr[0];
	two = arr[1];
	three =  arr[2];

	int exist =0;



	string ans;

	for(int j=0;j<arr[0];j++)
	{
		if(j==0)
		{
			string str = "1";
			ans.append(str);
		}
		else
		{
			string str = "+1";
			ans.append(str);
		}
		exist++;
	}

	if(arr[1]>0&&exist>0)
	{
		string s = "+";
		ans.append(s);
	}

	int exist2 = 0;

	for(int k=0;k<arr[1];k++)
	{
			if(k==0)
			{
				string s="2";
				ans.append(s);
			}
			else
			{
				string str = "+2";
				ans.append(str);
			}
			two--;
			exist2++;
	}

	if((exist>0||exist2>0)&&arr[2]>0)
	{
		string s = "+";
		ans.append(s);
	}

	for(int l=0;l<arr[2];l++)
	{

		if(l==0)
			{
				string s="3";
				ans.append(s);
			}
		else
			{
				string str = "+3";
				ans.append(str);
			}
	}

	cout<<ans<<endl;
}
