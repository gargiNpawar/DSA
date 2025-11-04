#include<bits/stdc++.h>
using namespace std;
string removeOuterParenthesis(string s)
{
    int count=0;
    string ans="";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('){
            if(count>0) ans.push_back(s[i]);
            count++;
        } else if (s[i]==')')
        {
            count--;
            if(count>0) ans.push_back(s[i]);
        }
    }
    return ans;
}
int main() {
    string input;
    cout << "Enter a valid parentheses string: ";
    cin >> input;

    string result = removeOuterParenthesis(input);
    cout << "After removing outer parentheses: " << result << endl;

    return 0;
}

//strings are dynamic in nature they can be resized at runtime
//contiguous in nature
//concatenation can be done


