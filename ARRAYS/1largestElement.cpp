#include<bits/stdc++.h>
using namespace std;
int largestElement(int arr[], int n)
{
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main()
{
    int n=5;
    int arr1[]={2,4,5,7,10};
    int largest=largestElement(arr1,n);
    cout<<"largest element is: "<<largest<<endl;

    int n1;
    cout<<"Enter the no of elements:";
    cin>>n1;

    int arr2[n1];
    for(int i=0;i<n1;i++){
        cin>>arr2[i];
    }
    int max=largestElement(arr2,n1);
    cout<<"largest element is: "<<max<<endl;

}

//brute force approach
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end()); //sorts the array in increasing order
    return arr[arr.size()-1]; //returns the last element ie n-1
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}