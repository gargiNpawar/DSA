#include<bits/stdc++.h>
using namespace std;
//ALSO THE WAY TO EXTRACT THE DIGITS OF THE NUMBER
int count(int n)
{
    int cnt=0;
    while(n>0)
    {
        int lastdigit=n%10;//modulo //NO NEED FOR TOTAL COUNT
        cout<<lastdigit<<endl;
        cnt=cnt+1;
        n=n/10; //divide
    }
    cout<<"The total no of digits are:" ;
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}
//ANOTHER WAY TO FIND THE NUMBER OF DIGITS IN A NUMBER
/*
int count(int n)
{
    int cnt=(int)log10(n)+1;
    return cnt;

}
*/

//TIME COMPLEXCITY = O(log b10(N)) as the no is divided by 10 base is log base 10
//when the no of iterations are based on divisions the time comp-->log
  
