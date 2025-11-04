#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &arr,int n)
{
    int sum=(n*(n+1)/2);
    int sum2=0;
    for(int i=0;i<n-1;i++)
    {
        sum2=sum2+arr[i];
    }
    int missingNum=sum-sum2;
    return missingNum;


}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
