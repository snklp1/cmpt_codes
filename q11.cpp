//definitely learnt something from this
//modulo 1000000007
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int prod = 1;
    while(n--)
    {
        int num;
        cin>>num;
        prod = (prod*num);
        if(prod>1000000007)
        {
            prod = prod%1000000007;
        }
    }
    cout<<prod;
    return 0;
}
