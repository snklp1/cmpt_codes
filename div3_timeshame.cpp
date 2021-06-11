#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int stone[n];
        int max, min;
        int max_index=0;
        int min_index= 0;
        for(int i=0;i<n;i++)
        {
            cin>>stone[i];
            if(i==0)
            {
                max = stone[i];
                min = stone[i];
            }
            else
            {
                if(stone[i]>max)
                {
                    max = stone[i];
                    max_index = i;
                }
 
                if(stone[i]<min)
                {
                    min = stone[i];
                    min_index = i;
                }
            }
        }
 
        min_index++;
        max_index++;
 
        if(max_index>min_index)
        {
            ;
        }
        else
        {
            int temp;
            temp = max_index;
            max_index = min_index;
            min_index = temp;
        }
 
        //cout<<min_index<<" "<<max_index<<endl;
 
        int mid = max_index - min_index;
 
        int back = n - max_index;
        int front = min_index;
 
 
        int ans[3];
 
        ans[0] = max_index;
        ans[1] = n- min_index+1;
        ans[2] = min_index + n- max_index+1;
 
        sort(ans, ans+3);
 
        cout<<ans[0]<<endl;
 
 
 
 
 
 
 
 
    }
    
}
