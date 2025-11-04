#include<bits/stdc++.h>
using namespace std;
vector<int> moveXeros(vector<int> &arr ,int n)
{
    int j=-1;
    //To find the first zero index
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    if (j == -1) //if no zero found...directly return the original array
        return arr;

    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr = moveXeros(arr, n);

    cout << "Array after moving zeros to the end:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
