#include<bits/stdc++.h>
using namespace std;

//armstrong number=153=1^3+5^3+3^3 are equal
int main()
{   
    int n;
    cin>>n;
    int sum=0;
    int duplicate=n;
    while(n!=0)
    {
        int lastdigit=n%10;
        n=n/10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
    }
    cout<<"is "<<duplicate<<" an amstrong number ? ";
    if(sum==duplicate) cout<<"true";
    else cout<<"false";
}