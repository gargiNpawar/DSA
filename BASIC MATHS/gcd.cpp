//for any two numbers there will always be a gcd ie 1 always there
//gcd=greatest common factor of two nos
//ie the common largest no  that divides both the nos

//approach 1 for n1=9 n2=12
/*
gcd=1
for(int i=1;i<=n1;i++)
{
    if(n1%i==0 && n2%i==0)
    {
        gcd=i;
    }

}
*/


//approach 2 for n1=12 n2=9
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n1,n2,gcd=1;
cout<<"Enter two numbers:";
cin>>n1>>n2;
for(int i=1;i<=min(n1,n2);i++)   //n goes from 1 to 9
{
    if(n1%i==0 && n2%i==0)      //TC= O(min(n1,n2))...WORST CASE
    {
        gcd=i;
    }

}
cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
return 0;
}
*/


//approach 3 for n1=20 n2=40 where gcd=20 this goes from 20 to 1 helps in faster finding of gcd
// condition is i should be greater than or equal to 1
/*
gcd=1
for(int i=min(n1,n2);i>=1;i--)   
{
    if(n1%i==0 && n2%i==0)     
    {
       cout<<i<<" ";
       break;
    }

}
*/
//Euclidean algorithm

//gcd(a,b) = gcd(a-b,b) where a>b
//eg gcd(20,15) =gcd(5,15)=gcd(10,5)=gcd(5,5)=gcd(0,5) 
//after one is 0,the other remaining no= gcd= 5

//IMP-->> gcd(a,b)=gcd(a%b,b) where a>b
//ie greater%smaller and go till one of them is zero and the other is gcd
#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b;
cout<<"Enter the two numbers:";
cin>>a>>b;
if (a == 0 && b == 0) {
    cout << "GCD is undefined for 0 and 0." << endl;
    return 0;
}


while(a>0 && b>0)
{
    if(a>b)
    {
        a=a%b;
    }
    else{
        b=b%a;
    }
}
if(a==0)
{
    cout<<"GCD is:"<<b<<" ";
}
else{
    cout<<"GCD is:"<<a<<" ";
}
return 0;
}



