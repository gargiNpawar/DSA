#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> &a,long long k)
{
    map<long long ,int> preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0; i<a.size();i++)
    {
        sum+=a[i];
        if(sum==k)
        {
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem) != preSumMap.end())
        /*
        preSumMap.find(rem) tries to find the key rem.

        If it finds it → returns an iterator pointing to that key-value pair.

        If it doesn’t find it → returns preSumMap.end()->we are past the end of the map
        */
        {
            int len=i-preSumMap[rem]; 
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }

    }
    return maxLen;
}
int main()
{
    int n;
    long long k;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = longestSubarrayWithSumK(a, k);

    cout << "Length of longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}