//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() 
{
    string s;
    cin >> s;
    if(s==reverseWord(s))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
    
}

string reverseWord(string str){
    
  string s_rev;
  for(int i=str.size()-1;i>=0;i--)
  {
      s_rev.push_back(str[i]);
  }
  return s_rev;
}
