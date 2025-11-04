#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr)
{
    int n=arr.size();
    if (n==1) return 0;
    if(arr[0] > arr[1]) return 0; //index number
    if(arr[n-1] > arr[n-2]) return n-1;

    int low=1, high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] >arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;//found peak
        }
        else if(arr[mid] > arr[mid-1]) low=mid+1;// peak is on right side
        else high=mid-1; // peak is on left side

    }
    return -1;
} 
int main() {
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    int peakIndex = findPeakElement(arr);

    if (peakIndex != -1) {
        cout << "Peak element found at index: " << peakIndex 
             << " with value: " << arr[peakIndex] << endl;
    } else {
        cout << "No peak element found." << endl;
    }

    return 0;
}
