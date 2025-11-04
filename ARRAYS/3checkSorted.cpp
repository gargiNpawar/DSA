#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
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
    if (isSorted(arr, n)) {
        cout << "The array is sorted in non-decreasing order.\n";
    } else {
        cout << "The array is NOT sorted.\n";
    }

}