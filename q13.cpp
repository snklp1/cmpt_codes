//https://practice.geeksforgeeks.org/problems/reverse-a-string/1
//


// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  string s_rev;
  for(int i=str.size()-1;i>=0;i--)
  {
      s_rev.push_back(str[i]);
  }
  return s_rev;
}
