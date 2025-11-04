#inclide<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> &a,long long k)
{
    int left=0, right=0;
    long long sum=a[0];
    int maxLen=0;
    int n=a.size();
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum -=a[left]; //pehele sum se minus fir left pointer badhao
            left++;
        }
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }
        right++; //pehele pointer badhao fir add karo
        if(right<n) sum+=a[right];


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