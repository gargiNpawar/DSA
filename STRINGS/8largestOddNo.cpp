#include<bits/stdc++.h>
using namespace std;
string largestOddNumber(string num)
{
    for(int i=num.length()-1;i>=0;i--)
    {
        if((num[i]-'0') % 2 != 0) //is odd 

        {
            return num.substr(0,i+1); //i+1 is excluded
        }
    }
    return ""; //or else return empty string
}
int main() {
    string num;
    cout << "Enter a number string: ";
    cin >> num;

    string result = largestOddNumber(num);
    cout<< result;
}