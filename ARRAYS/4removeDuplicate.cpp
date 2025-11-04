#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int> &arr,int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n;
    cout<<"Enter the no of elements";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int newSize=removeDuplicate(arr,n); //total no of elements
    cout<<newSize<<endl;

    cout<<"Array after removing duplicates:\n";
    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
