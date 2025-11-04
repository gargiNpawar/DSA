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
int upperBound(vector<int> arr, int n,int x)
{
    int low=0 , high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high) /2;
        //maybe answer
        if(arr[mid]> x){ //remove the "=" for change in lower bound code
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
pair<int,int> firstAndLastPosition(vector<int> arr,int n,int k)
{

    int lb=lowerBound(arr,n,k);
    if(lb==n || arr[lb]!= k) return{-1,-1};
    return{lb,upperBound(arr,n,k)-1};

}
int main()
{
    vector<int> arr={1,2,3,3,3,4,5};
    int n=arr.size();
    int k=3;
    pair<int,int> ans=firstAndLastPosition(arr,n,k);
    
    cout << "First Position: " << ans.first << "\n";
    cout << "Last Position: " << ans.second << "\n";

    return 0;
}