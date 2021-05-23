#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
 
    int temp =n;
 
    int a[n];
 
    int rem =0;
 
    while(n--)
    {
        cin>>a[n];
        rem = rem + a[n];
    }
 
    n = temp;
    //cout<<"rem: "<<rem<<endl;
 
    int take =0;
 
    sort(a,a+n);
    int cnt=0;
 
    while(rem>=take)
    {
        n--;
        //cout<<"n:    "<<n<<endl;
        take = take + a[n];
        rem = rem - a[n];
        //cout<<"take: "<<take<<endl;
        //cout<<"rems: "<<rem<<endl;
        //cout<<endl;
        cnt++;
    }
 
    cout<<cnt<<endl;
    return 0;
}
