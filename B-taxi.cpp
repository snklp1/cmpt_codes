#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp =n;
    int arr[n];
    int cars=0;
    int num[5]={0};

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        num[arr[i]]++;
    }

    
    cars = cars + num[4];
    cars = cars + num[3];

    if(num[1]<=num[3])
    {
        num[1] = 0;
    }
    else
    {
        num[1] = num[1] - num[3];
    }

    int ones_with_twos;
    ones_with_twos = num[1]/2;


    while(num[2]>0&&num[1]>0)
    {
        cars++;
        num[2]--;
        num[1] = num[1] -2;
        if(num[1]<1)
            break;
    }

    if(num[2]>0&&num[1]<1)
    {
        cars = cars + num[2]/2 + num[2]%2;
    }
    if(num[2]==0&&num[1]>0)
    {
        cars = cars + num[1]/4;
        num[1] = num[1]%4;

        if(num[1]>0)
        {
            cars++;
        }
    }

    cout<<cars<<endl;


    return 0;

}
