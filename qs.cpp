#include<bits/stdc++.h>
using namespace std;




int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}




int part(int a[], int low, int high)
{
    int pivot;
    pivot = a[low];
    int i,j;
    i = low; //increment i until you find something greater than pivot
    j=high; //decrement j until you find something smaller than pivot

    while(i<j)
    {
        do
        {
            i++;
        }while(a[i]<=pivot);

        do
        {
            j--;
        }while(a[j]>=pivot);

        if(i>j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);


    return j;
}







void qsort(int a[],int high, int low)
{
    int i,j;
    if(low<high)
    {
        j=part(a,low,high);
        qsort(a,low,j-1);
        qsort(a,j+1,high);
    }

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

}







int main()
{
    int low, high;
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    low = 0;
    high = 9;

    
    qsort(arr,low,high);

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }



    return 0;
}
