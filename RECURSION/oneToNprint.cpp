#include<bits/stdc++.h>
using namespace std;
// Print from 1 to N using Recursion
// forward recursion 
void print(int i,int n)
{
    if(i>n) return; //if i gets greater than n
    cout<<i<<" ";
    print(i+1,n);

}
int main()
{
    int n;  //give the 1 to n vala no  
    cin>>n;
    print(1,n);
}
//   OR
//backward recursion
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;
   
   // Function call to print (n-1) integers.
   func(i-1,n);
   cout<<i<<endl; //print after the function call

}
int main()
{
    int n;
    cin>>n;
    func(n,n);
    return 0;
}