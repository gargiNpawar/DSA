#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) 
{
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.end());            
    reverse(nums.begin(), nums.begin() + k);      
    reverse(nums.begin() + k, nums.end());        
}
int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the number of positions to rotate to the right: ";
    cin >> k;

    rotate(nums, k);

    cout << "Array after right rotation:\n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
