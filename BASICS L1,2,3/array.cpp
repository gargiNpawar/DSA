#include<bits/stdc++.h>
using namespace std;
int main()
/*{
    int arr[5];  //similar data stored togethor
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=12;
    cout<<"The array value at 3rd index is :"<<arr[3];//44+12=56
}
//datatype can be int,char,double..all of same datatype
//indexing starts at 0
*/
{
   int arr[3][5]; //[row][column]
   arr[1][3]=45;
   cout<<arr[1][3]<<endl;
   cout<<arr[2][5]; //returns garbage value

}

