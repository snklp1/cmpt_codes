//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/submissions/

#include<iostream>
 
using namespace std;
 
int main()
{
    int no_of_testcase, n;
    int cost1, cost2;
    cin>>no_of_testcase;
    int arr[10][2];
 
    
 
    for(int i=0;i<no_of_testcase;i++)
    {
        int green_win1=0, green_win2=0, purple_win1=0, purple_win2=0;
        cin>>cost1>>cost2;
        cin>>n;
 
 
 
 
 
 
 
        //making all array values zero
        for(int k =0;k<10; k++)
        {
            for (int j=0; j<2 ; j++)
            {
                arr[k][j] = 0;
            }
        }
 
 
 
 
 
 
        //input all loose win values
        for(int k1=0;k1<n;k1++)
        {
            cin>>arr[k1][0]>>arr[k1][1];
        }
 
 
 
 
 
        //
        for(int k2=0;k2<n;k2++)
        {
            if(arr[k2][0]==1)
            {
                green_win1= green_win1 + cost1;
                purple_win2 = purple_win2 + cost2;
            }
            if(arr[k2][1]==1)
            {
                purple_win1 = purple_win1 + cost2;
                green_win2 = green_win2 + cost1;
            }
 
        }
        int final_price1 = green_win1 + purple_win1;
        int final_price2 = green_win2 + purple_win2;
        if(final_price1>final_price2)
        {
            cout<<final_price2<<endl;
        }
        else
        {
            cout<<final_price1<<endl;
        }
 
 
 
    }
 
    return 0;
 
}
