#include<bits/stdc++.h>
using namespace std;
/*
void print1( int n)
{
    for(int i=0;i<n;i++){    //prints the 4 rows/lines
        for(int j=0;j<n;j++) //prints the 4 stars in a row ie 4 columns
        {
            cout<<"*";
        }
        cout<<endl;
    }                             
}
int main()
{
   int n;
   cin>>n; 
   print1(n);
}
*/
/*
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){  
     int n;
     cin>>n;
     print1(n) }

}
*/


/*
void print2(int n)
{
    for(int i=0;i<n;i++)    //when we take i=0...i<n
    {
        for(int j=0;j<=i;j++){
            cout<<"* ";      //we have row number=nos stars printed in each row
        }
        cout<<endl;
    }
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print2(n);
     }

}
*/


/*
void print3(int n){   //when we take i=1...i<=n
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }   
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print3(n);
     }

}
*/


/*
void print4(int n){   //when we take i=1...i<=n
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)  //how many stars u want in a row/line...link its relation to line/i
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }   
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print4(n);
     }

}
*/


/*
void print5(int n)
{
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print5(n);
     }

}
*/


/*
void print6(int n)
{
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print6(n);
     }

}
*/


/*
//for the first loop always think about the no of lines to be printed

void print7(int n)
{
    for(int i=0;i<n;i++)//lines
    {
        for(int j=0;j<n-i-1;j++)//spaces of one line at time
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)//stars
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)//spaces
        {
            cout<<" ";
        }
        cout<<endl;
    }
}


void print8(int n)
{
    for(int i=0;i<n;i++)//lines
    {
        for(int j=0;j<i;j++)//spaces of one line at time
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)//stars
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)//spaces
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print7(n);
     print8(n);
     }

}
*/

// THE NO OF LINES/ROWS==i
//how many stars we want have to be put in condition formula of loop
//find relation between row no(i) and no of stars we want
// TO BUILD THE FORMULA USE ROW NO=i
/*
void print10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
     int n;
     cin>>n;
     print10(n);
     }

}
*/

