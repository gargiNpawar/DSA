#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int revNum=0;
    int duplicate=n;
    while(n!=0)
    {
        int lastdigit=n%10;
        n=n/10;
        revNum= revNum*10 +lastdigit;
    }
    if(duplicate==revNum) cout<<" true";
    else cout<<"false";
    
}