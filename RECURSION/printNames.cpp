#include<bits/stdc++.h>
using namespace std;
// Print your Name N times using recursion
void func(int i,int n)
{
    if(i>n) return; // Base Condition.
    cout<<"raj"<<" ";
    func(i+1,n); // Function call to print till i increments.


}
int main()
{
    int n; //n should the no of time we want the name to be printed
    cin>>n;
    func(1,n);
    return 0;

}