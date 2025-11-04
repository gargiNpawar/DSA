#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d)

{   //reverse(start_pointer, end_pointer)  
   // reverses elements from start to end - 1
    reverse(arr,arr+d);//Reverses the first d elements: arr[0] to arr[d-1]
    reverse(arr+d,arr+n);//pointer at arr[d] to arr[n-1]
    reverse(arr,arr+n);//arr[0] to arr[n-1]
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


/*REVERSE CODE FROM SCRATCH WITHOUR FUNCTION
void Reverse(int arr[],int start,int end)
{
    while(start<=end) //they cross path
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}
*/





