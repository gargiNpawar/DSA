#include<bits/stdc++.h>
using namespace std;
//Factorial of N numbers
int fact(int n)
{
    if(n==0) return 1;   //f(4)=4*f(3)...f(3)=3*f(2)...f(2)=2*f(1)...f(1)=1*f(0)...f(0) returns 1
    return n*fact(n-1);  //Fact of 4=24      6              2              1            1
                        
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
//t=O(N)..S=O(N)...stack spack is used