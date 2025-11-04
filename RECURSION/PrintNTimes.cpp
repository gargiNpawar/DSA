#include<bits/stdc++.h>
using namespace std;
//Recursive code for printing numbers from 0 to 3 : 
int cnt=0;
void print()
{
    if(cnt==4)
    {
        return;
    }
    cout<<cnt<<" ";
    cnt++; 
    print();
}
int main()
{
    print();
}