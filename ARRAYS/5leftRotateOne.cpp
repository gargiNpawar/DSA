#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> &arr ,int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;  //return the rotated array
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr = rotateArray(arr, n); // rotated only once

    cout << "Array after one left rotation:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}