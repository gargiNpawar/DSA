#include<bits/stdc++.h>
using namespace std;
//reverse digit
//reverse digit* 10 + digit..that allows the last digit to be 0 and so we add the digit that gets into the place
int reverse(int n)
{
    int revNum=0;
    while(n>0)
    {
        int lastdigit=n % 10;
        n=n/10;
        revNum=(revNum*10) + lastdigit;
    }
    cout<<"Reverse of the is: ";
    return revNum;
}
int main()
{
    int number;
    cin>>number;
    cout<<reverse(number);
    /*
    int rev=reverse(number);
    cout<<rev;
    */
    return 0;
}
