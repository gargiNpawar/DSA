#include <bits/stdc++.h>
using namespace std;

// Function to find the index of target or its insert position
int searchInsert(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;  // Default insertion at end if not found

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;  // Target found

        if (arr[mid] >=x) {
            ans = mid;    // Possible insert position
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;  // Return insert position if not found
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};  // Sorted, distinct
    int x = 2;
    int n = arr.size();

    int index = searchInsert(arr, n, x);
    cout << "Index of target or insert position: " << index << endl;

    return 0;
}
