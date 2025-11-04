#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i <= high && arr[i] <= pivot)//need ele larger than pivot
            i++;

        while (j >= low && arr[j] > pivot)//need ele smaller than pivot
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

int main()
{
    vector<int> arr = {9, 3, 7, 1, 5, 4, 8};
    int n = arr.size();

    qs(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
