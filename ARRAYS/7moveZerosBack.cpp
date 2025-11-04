#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(vector<int> &arr,int n)
{
    vector<int> temp;
    //move non-zeros to temp array
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }

    }
    //move ele from temp to arr array
    int nz=temp.size();
    for(int i=0;i<nz;i++)
    {
        arr[i]=temp[i];
    }
    //count the zeos and put it at the back
    for(int i=nz;i<n;i++)
    {
        arr[i]=0;
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

    arr = moveZeros(arr, n);

    cout << "Array after moving zeros to the end:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


