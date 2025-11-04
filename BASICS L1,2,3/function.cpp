#include<bits/stdc++.h>
using namespace std;
//functions are void, return,parameterized , non parameterized
/*
//void function
void printName(string name){
    cout<<"HEY  "<<name;
}
int main()
{
    string name;
    cin>>name;
    printName(name);

    string name2;
    cin>>name2;
    printName(name2);
    return 0;
}

//return function....int should always find a return value..else it will throw garbage value
int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int res=sum(num1,num2);
    cout<<res;
    return 0;
}
//first the function is executed and then the value is returned
*/
int maxvalue(int num1,int num2){
    if(num1>=num2){
        return num1;
    }
    return num2;

}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int maximum=maxvalue(num1,num2);
    cout<<maximum;
    return 0;
}