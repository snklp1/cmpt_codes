#include<bits/stdc++.h>
using namespace std;

//Author: snklp1
//TE: Sublime Text 3
//snpt(1) ok_start

#define llint     	long long int
#define lint      	long int
#define vint      	vector<int>
#define vllint    	vector<long long int> 
#define vpint     	vector<pair<int,int>> 
#define vpllint   	vector<pair<long long int, long long int>> 
#define MP        	make_pair
#define PB        	push_back
#define POB       	pop_back
#define all(v)    	(v).begin(),(v).end()

//int fun()

void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}



bool isSquare(llint num)
{
	double flt = std::sqrt(num);
	lint intt = (int)flt;
	if((float)intt==flt)
	{
		return true;
	}
	else
	{
		return false;
	}

}


bool isTprime(llint num)
{
	llint nm = (int)(std::sqrt(num))+1;
	int div=0;
	
	for(int i = 2; i <=nm ; ++i)
	{
		if(num%i==0)
		{
			//cout<<i<<endl;
			div++;
			break;
		}
	}

	if(div>0)
	{
		return false;
	}
	else
	{
		return true;
	}
	

	


}


int main()
{
	int n;
	cin>>n;



	for (int i = 0; i < n; ++i)
	 {
	 	/* code */
	 	llint temp;
	 	cin>>temp;
	 	//cout<<req_send<<endl;

	 	if(temp<=4)
	 	{
	 		if(temp<4)
	 		{
	 			no();
	 		}
	 		else
	 		{
	 			yes();
	 		}
	 	}
	 	else
	 	{
	 		if(isSquare(temp))
	 		{
	 			llint nm = (int)(std::sqrt(temp));
	 			if(isTprime(nm))
			 	{
			 		yes();
			 	}
			 	else
			 	{
			 		no();
			 	}
	 		}
	 		else
	 		{
	 			no();
	 		}		 		
	 	}
	 	//cout<<temp<<endl;
	 } 

    return 0;
}


//end
