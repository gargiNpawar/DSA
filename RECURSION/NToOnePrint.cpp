#include <bits/stdc++.h>
using namespace std;
// Print from N to 1 using Recursion
//forward recursion
void print(int i,int n)
{
    if(i<1) return; //is i smaller than 1..prints from n to 1
    //or if(i<0) prints from n to 0
    cout<<i<<" ";
    print(i-1,n);

}
int main()
{
    int n;
    cin>>n;
    print(n,n);
} 
//   OR
//Backward recursion
#include <bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i>n) return; 
    print(i+1,n);
    cout<<i<<" ";
    

}
int main()
{
    int n;
    cin>>n;
    print(1,n);
} 