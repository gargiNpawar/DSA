#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &arr)
{
    int n=arr.size(); //more correct and clean
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){ //for checking for the sorted 
            count++;
        }
    }
    if(arr[0]<arr[n-1]){ //check for the rotated thing
        count++;
    }
    return count<=1; //return false-count>1
                     //return true-count=0,1
                     //only one drop/break:
}
/*

A sorted array (like [1, 2, 3, 4]) has count = 0.

A rotated sorted array (like [3, 4, 1, 2]) has count = 1.

An unsorted array (like [2, 1, 4, 3]) will have count > 1.


*/
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (check(arr)) {
        cout << "The array is sorted and rotated.\n";
    } else {
        cout << "The array is NOT sorted and rotated.\n";
    }

    return 0;
}