#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> arr,int n)
{
    int xor1=0,xor2=0;

    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^arr[i];// XOR of array elements
        xor1=xor1^(i+1);//XOR up to [1...N-1]

    }
    xor1=xor1^n;//XOR up to [1...N]
    return (xor1^xor2);

}
int main()
{
    int N = 7;
    vector<int> a = {1, 2, 3, 5, 7, 6};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}