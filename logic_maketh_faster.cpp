//the slow version
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
 
    long long int sum=0;
 
    for(long long int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum = sum - i;
 
        }
        else
        {
            sum = sum + i;
        }
    }
 
    cout<<sum;
 
}

//the fast version using logic
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    long long sum =0;

    sum = n/2;

    if(n%2==1)
    {
        sum = sum - n;
    }

    cout<<sum<<endl;

    return 0;

}
