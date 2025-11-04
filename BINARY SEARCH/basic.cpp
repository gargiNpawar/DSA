#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) 
{
        int n=nums.size();
        int low=0 ,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return -1;
        
}

int main() {
    vector<int> nums = { -5, -1, 0, 3, 5, 9, 12 };
    int target = 9;

    int result = search(nums, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}

