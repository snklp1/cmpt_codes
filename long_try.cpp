#include<bits/stdc++.h>
using namespace std;

int bsort(int a[], long int m, int l, int r)
{
	if(r>l)
	{
		int temp = (r+l)/2;
		if(a[temp]>m)
		{
			bsort(a,m,l,temp);
		}
		else
		{
			if(a[temp]<m)
			{
				bsort(a,m,temp,r);
			}
			else
			{
				return temp-1;
			}
		}
	}
	else
	{
		for(int i=l;i<r;i++)
		{
			if(a[i]>=m)
			{
				return i+1;
			}
		}

	}
		
	
}
 
int main()
{
	int n;
	cin>>n;
	int prc[n];
	for(int i=0;i<n;i++)
	{
		cin>>prc[i];
	}
 
	sort(prc,prc+n);
 
	int q;
	cin>>q;
	int temp = q;
	while(temp--)
	{
		long int m;
		cin>>m;
		int ans;
		ans = bsort(prc,m,0,n-1);
		cout<<ans<<endl;

	}
 
	return 0;
 
}
