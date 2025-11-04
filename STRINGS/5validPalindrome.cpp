#include<bits/stdc++.h>
using namespace std;
bool isAphaNum(char ch)
{
    if((ch>='0'&& ch<='9') ||(tolower(ch)>='a'&& tolower(ch)<='z'))
    {
        return true;
    }
    return false;

}
bool isPalindrome(string s)
{
    int st=0,end=s.length()-1;
    while(st<=end)
    {
        if(!isAphaNum(s[st]))
        {
            st++;
            continue;
        }
        if(!isAphaNum(s[end]))
        {
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter a string to check for palindrome: ";
    getline(cin, s);

    if (isPalindrome(s))
        cout << "The string is a palindrome (alphanumeric check)." << endl;
    else
        cout << "The string is NOT a palindrome." << endl;

    return 0;
}
