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

	int temp = n;
	int arr[n];
	int one = 0;
	int zero = 0;


	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		if(arr[i]==1)
			one++;
	}

	int max = one;

	if(max==n)
	{
		cout<<n-1;
		return 0;
	}

	for (int k = 0; k < n; k++)
	{
		/* code */
		int i = 0;
		int j = k;
		//cout<<"---------------------------------"<<endl;
		//cout<<"******for size: "<<j<<"******"<<endl;
		while(j<=n-1)
		{
			//cout<<"///////////////////////////////"<<endl;
			//cout<<"for range: ("<<i<<","<<j<<")"<<endl;	
			int tmp_array[n]={0};
			int temp_sum = 0;
			int act_sum = 0;
			for (int t = i; t<=j ;t++)
			{
				/* code */
				//cout<<arr[t]<<" changed to ";
				act_sum = act_sum + arr[t];
				tmp_array[t] = 1-arr[t];
				//cout<<tmp_array[t]<<endl;
				temp_sum = temp_sum + tmp_array[t];
			}

			//cout<<"act sum : "<<act_sum<<" and temp_sum : "<<temp_sum<<endl;

			if(temp_sum>act_sum)
			{
				//cout<<"hence temp_sum is greater."<<endl;
				//cout<<"total array is : "<<endl;

				int sumsum =0;
				for(int h=0;h<n;h++)
				{
					if(h>=i&&h<=j)
					{
						sumsum = sumsum + tmp_array[h];
						//cout<<tmp_array[h]<<" ";
					}
					else
					{
						sumsum = sumsum + arr[h];
						//cout<<arr[h]<<" ";
					}
				}
				//cout<<endl;

				//cout<<"calculated total sum : "<<sumsum<<endl;

				if(sumsum>max)
				{
					max = sumsum;
					//cout<<"max updated"<<endl;
				}
			}

			//cout<<"current max : "<<max<<endl;

			i++;
			j++;
		}
	}

	cout<<max;

    return 0;
}


//end


/*
//full commented version which shows whats happening
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

	int temp = n;
	int arr[n];
	int one = 0;
	int zero = 0;


	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		if(arr[i]==1)
			one++;
	}

	int max = one;

	if(max==n)
	{
		cout<<n-1;
		return 0;
	}

	for (int k = 0; k < n; k++)
	{
		/* code */
		int i = 0;
		int j = k;
		cout<<"---------------------------------"<<endl;
		cout<<"******for size: "<<j<<"******"<<endl;
		while(j<=n-1)
		{
			cout<<"///////////////////////////////"<<endl;
			cout<<"for range: ("<<i<<","<<j<<")"<<endl;	
			int tmp_array[n]={0};
			int temp_sum = 0;
			int act_sum = 0;
			for (int t = i; t<=j ;t++)
			{
				/* code */
				cout<<arr[t]<<" changed to ";
				act_sum = act_sum + arr[t];
				tmp_array[t] = 1-arr[t];
				cout<<tmp_array[t]<<endl;
				temp_sum = temp_sum + tmp_array[t];
			}

			cout<<"act sum : "<<act_sum<<" and temp_sum : "<<temp_sum<<endl;

			if(temp_sum>act_sum)
			{
				cout<<"hence temp_sum is greater."<<endl;
				cout<<"total array is : "<<endl;

				int sumsum =0;
				for(int h=0;h<n;h++)
				{
					if(h>=i&&h<=j)
					{
						sumsum = sumsum + tmp_array[h];
						cout<<tmp_array[h]<<" ";
					}
					else
					{
						sumsum = sumsum + arr[h];
						cout<<arr[h]<<" ";
					}
				}
				cout<<endl;

				cout<<"calculated total sum : "<<sumsum<<endl;

				if(sumsum>max)
				{
					max = sumsum;
					cout<<"max updated"<<endl;
				}
			}

			cout<<"current max : "<<max<<endl;

			i++;
			j++;
		}
	}

	cout<<max<<endl;

    return 0;
}


//end
*/
