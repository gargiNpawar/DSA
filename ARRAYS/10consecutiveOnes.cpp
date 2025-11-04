#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &arr)
{
    int maxi=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter number of elements in the binary array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements (only 0 or 1):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = findMaxConsecutiveOnes(arr);

    cout << "Maximum number of consecutive 1s: " << result << endl;

    return 0;
}