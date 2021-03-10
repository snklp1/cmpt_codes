//took a huge amount of time
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string message;
  int k;

  getline(cin,message);
  cin>>k;
  string answer="";

  for(int i=0;i<message.size();i++)
  {
    char temp1;
    if((message[i]>64&&message[i]<91)||(message[i]>96&&message[i]<123)||(message[i]>47&&message[i]<58))
    {

      if(message[i]>64&&message[i]<91)
      {
        temp1 = message[i];
        for(int j=1;j<=k;j++)
        {

          temp1= (char)(temp1+1);
          if(temp1>90)
          {
              temp1 = (char)(temp1 - 26);
          }
        }
      }


      if(message[i]>47&&message[i]<58)
      {
        temp1 = message[i];
        for(int j=1;j<=k;j++)
        {
          temp1= (char)(temp1+1);
          if(temp1>57)
          {
              temp1 = (char)(temp1 - 10);
          }
        }
      }

      if(message[i]>96&&message[i]<123)
      {
        temp1 = message[i];
        for(int j=1;j<=k;j++)
        {
          temp1= (char)(temp1+1);
          if(temp1>122)
          {
              temp1 = (char)(temp1 - 26);
          }
        }
      }
      answer.push_back(temp1);
      }



    else
    {
      answer.push_back(message[i]);
    }

  }

  cout<<answer<<endl;


  return 0;
}
