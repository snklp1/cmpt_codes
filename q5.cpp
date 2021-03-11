//good one
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int round=0;


    while(n>0)
    {
        round++;
        int motu,patlu;
        motu    =  2* round;
        patlu   =     round;
        

        if(n>patlu)
        {
            n = n - patlu;
            if(n>motu)
            {
                n = n - motu;
                continue;
            }
            else if(n==motu)
            {
                cout<<"Motu"<<endl;
                break;
            }
            else if(n<motu)
            {
                cout<<"Motu"<<endl;
                break;

            }


        }
        else
        {
            cout<<"Patlu"<<endl;
            break;
        }

    }

    return 0;
}
