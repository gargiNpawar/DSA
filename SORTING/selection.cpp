#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)//function defination
//arr[] and *arr in a function both mean a pointer to the first element.
{
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main()
{   
    //this is function call
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i]; //for forming the array

    selection_sort(arr,n); //pass array to function..use its name
    // This sends the address of the first element of the array to the function.

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";//for sorted array
    }
}