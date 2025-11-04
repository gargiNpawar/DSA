#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d)
{
    d=d%n;
    int temp[d]; //declare temp array
    // Copy first d elements to temp
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    // Shift the remaining elements to the left
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    // Copy temp elements to the end
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }


}

int main()
{
    int n, d;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate left: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "Array after left rotation:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}