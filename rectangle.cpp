#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int cnt = 0;

		int x1,x2,y1,y2;

		char a[n][n];

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];

				if(a[i][j]=='*'&&cnt==0)
				{
					x1 = i;
					y1 = j;
					cnt++;
				}

				if(a[i][j]=='*'&&cnt>0)
				{
					x2 = i;
					y2 = j;
				}
			}
		}

/*
		cout<<"X1,Y1 : "<<x1<<","<<y1<<endl;
		cout<<"X2,Y2 : "<<x2<<","<<y2<<endl;
*/

			a[x2][y1] = '*';
			a[x1][y2] = '*';

		if(x1!=x2&&y1==y2)
		{
			if(y1==n-1)
			{
				a[x1][0] = '*';
				a[x2][0] = '*';
			}
			else
			{
				if(y1==0)
				{
					a[x1][n-1] = '*';
					a[x2][n-1] = '*';
				}
				else
				{
					a[x1][y1-1] = '*';
					a[x2][y2-1] = '*';
				}
			}
		}



		if(x1==x2&&y1!=y2)
		{
			if(x1==n-1)
			{
				a[0][y1] = '*';
				a[0][y2] = '*';
			}
			else
			{
				if(x1==0)
				{
					a[n-1][y1] = '*';
					a[n-1][y2] = '*';
				}
				else
				{
					a[x1-1][y1] = '*';
					a[x2-1][y2] = '*';
				}
			}
		}
		





		for(int k=0;k<n;k++)
		{
			for(int l=0;l<n;l++)
			{
				cout<<a[k][l];
			}
			cout<<endl;
		}
	}
	return 0;
}
