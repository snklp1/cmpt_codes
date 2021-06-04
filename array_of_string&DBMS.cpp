#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;

    string database[n];
    int counter[n]={0};


    int distinct = 0;
    int index=0;
    

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(i==0)
        {
            database[i]=s; //first value always non repeated
            counter[i]++; //value of each iteration
            distinct++; //number of distinct values
            cout<<"OK"<<endl; 
        }
        else
        {
            int found =0;
            for(int j=0;j<distinct;j++)
            {
                if(s==database[j])
                {
                    cout<<s<<counter[j]<<endl;
                    counter[j]++;
                    found++;
                }
            }
            if(found==0)
            {
                counter[distinct]++;
                cout<<"OK"<<endl;
                database[distinct] = s;
                distinct++;
            }
        }
    }

    

    //for(int j=0;j<n;j++)
    //    cout<<counter[j]<<endl;




    

    return 0;

}





/*
// C++ program to demonstrate array of strings using
// array of strings.
#include <iostream>
#include <string>
 
int main()
{
    // Initialize String Array
    std::string colour[4] = { "Blue", "Red",
                              "Orange", "Yellow" };
 
    // Print Strings
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}
*/
