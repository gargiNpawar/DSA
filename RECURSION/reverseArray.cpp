#include<bits/stdc++.h>
using namespace std;
//Reverse an array
void f(int i,int arr[],int n)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]); //swap first and last indexed element
    f(i+1,arr,n);


}
int main()
{
    int n; //ask the no of elements in arr
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];//ask for arr[0],arr[1],arr[2],arr[3]
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";//print the reverse array
}