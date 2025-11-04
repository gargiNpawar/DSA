#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n,int x)
{
    int low=0 , high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high) /2;
        //maybe answer
        if(arr[mid]>=x){
            ans=mid;
            //look for more samller index at left
            high=mid-1;
        }
        else{
            low=mid+1; //look for right
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8};  // Sorted array
    int x = 4;  // Element to find lower bound for
    int n = arr.size();

    int index = lowerBound(arr, n, x);

    if (index != n)
        cout << "Lower bound of " << x << " is at index: " << index << endl;
    else
        cout << "No element >= " << x << " found in the array." << endl;

    return 0;
}