#include<bits/stdc++.h>
using namespace std;
//Fibonacci Number...multiple recurrion
int fibo(int n)
//f(n)=f(n-1)+f(n-2)
{
    if(n<=1) return n;
    int last=fibo(n-1); //1st call
    int slast=fibo(n-2);//2nd call
    return last+slast;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}