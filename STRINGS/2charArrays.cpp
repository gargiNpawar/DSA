#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[15];
    char str2[]="apna college";
    cout<<"Enter the charater arr: ";
    cin.getline(str,15); // Reads up to 14 characters + null terminator
    for(char ch:str)
    {
        cout<<ch<<" ";//to print the string char by char with space
    }
    cout<<endl;
    int len=0;
    for(int i=0;str2[i]!='\0';i++)
    {
        len++;
    }
    cout<<"The length of string is "<<len<<endl;//apna=4+space=1+college=7=12
    cout<<"The length using function"<<strlen(str2)<<endl;

    cout<<"output: "<< str <<endl;//to print whole string
    return 0;
}
/*
output:
Enter the character arr: HelloWorld
H e l l o W o r l d     [↤ extra spaces from unused elements in array]
The length of string is 12
output: HelloWorld

*/
