#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,int num,vector<int> &arr)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, num;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> num;

    int index = linearSearch(n, num, arr);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}