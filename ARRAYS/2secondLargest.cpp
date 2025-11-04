#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> &arr,int n)
{
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int secondSmallest(vector<int> &arr,int n)
{
    int smallest=arr[0];
    int second_smallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<second_smallest)
        {
            second_smallest=arr[i];
        }
    }
    return second_smallest;

}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secLargest = secondLargest(arr, n);
    int secSmallest = secondSmallest(arr, n);

    cout << "Second Largest: " << secLargest << endl;
    cout << "Second Smallest: " << secSmallest << endl;

    return 0;
}