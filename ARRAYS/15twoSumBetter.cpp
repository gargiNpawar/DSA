#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums,int target)
{
    map<int,int> mpp;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int num=nums[i];
        int moreNeeded=target-num;
        if(mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded],i};
        }
        mpp[num]=i;

    }
    return {-1,-1};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    return 0;
}