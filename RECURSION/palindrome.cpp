#include<bits/stdc++.h>
using namespace std;
//Check if a string is palindrome or not
bool f(int i,string &s) //we use pointer for the function defination
{
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return f(i+1,s);
}
int main()
{
    string s; //variable s is of string type
    cin>>s;
    cout<<f(0,s); //we use string name for the fun call
    return 0;

}

//create clean string
/*
string cleanString(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            result += c;
        }
        else if (c >= 'A' && c <= 'Z') {
            result += c + 32; 
        }
    }
    return result;
}
*/

                            // OR using 
/*
 string cleanString(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) { //keep only a-z and 0-9
            result += c;
        }
        else if (c >= 'A' && c <= 'Z') {
            result += c + 32; // convert uppercase to lowercase
        }
    }
    return result;
}

    bool check(string& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    
    bool isPalindrome(string s) {
        s = cleanString(s);
        return check(s);  
    }

*/