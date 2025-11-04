#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    int n=s.length();
    string ans="";
    // Step 1: Reverse the entire string
    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++)
    {
        string word="";
        // Step 2: Extract a word
        while(i<n && s[i] !=' ')
        {
            word +=s[i];
            i++;
        }
    // Step 3: Reverse the word and add to answer
       reverse(word.begin(),word.end());
       if(word.length()>0)
       {
        ans += " "+ word;
       }
    }
    return  ans.substr(1);
}
int main()
{
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    string result = reverseWords(input);
    cout << "Reversed word order: " << result << endl;

    return 0;
}