#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;

		int a_count = a;  //a zeros
		int b_count = b;  //b ones

	
		string s;
		cin>>s;


		for(int k1=0;k1<a+b;k1++)
		{
			if(s[k1]=='1')
				b_count--;
			if(s[k1]=='0')
				a_count--;
		}

		int back;
		back = a+b;

		int len;
		len = (a+b)/2;





		while(a_count>0||b_count>0)
		{
			for(int i=0;i<len;i++)
			{
				back--;



				if(s[i]=='?')
				{
					if(s[back]=='?')
					{
						
						if(a_count>b_count)
						{
							s[back] = '0';
							s[i] = '0';
							a_count--;
						}
						else
						{
							s[back] = '1';
							s[i] = '1';
							b_count--;
						}
					}
					if(s[back]=='1')
					{
						s[i] = '1';
						b_count--;
					}
					if(s[back]=='0')
					{
						s[i] = '0';
						a_count--;
					}
				}




				if(s[i]=='1')
				{
					if(s[back]=='?')
					{
						s[back] = '1';
						b_count--;
					}
				}


				if(s[i]=='0')
				{
					if(s[back]=='?')
					{
						s[back] = '0';
						a_count--;
					}
				}
			}
		}


		cout<<s<<endl;



		
	}
	return 0;
}
