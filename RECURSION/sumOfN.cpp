#include<bits/stdc++.h>
using namespace std;
//Parameterized function
/*
void sumNum(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<" ";
        return;
    }
    sumNum(i-1,sum+i);  


}
int main()
{
    int n;
    cin>>n;
    sumNum(n,0);
    return 0;
}
*/
/* 
  i-1,sum+i
f(3,0)
  |
f(2,3) 
  |
f(1,5)
  |
f(0,6)  sum=6 
*/

//functional....where a function returns something
int sum(int n)
{

  if(n==0) return 0;
  return n+sum(n-1); //f(3)=3+f(2)...f(2)=2+f(1)...f(1)=1+f(0)...f(0)==0
                     //6=3+3           3=2+1            1=1+0          0                
}
int main()
{
  int n;    //1 to n nos ka sum
  cin>>n;
  cout<<sum(n);
  return 0;
}

