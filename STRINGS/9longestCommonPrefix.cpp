#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &s )
{
    string ans="";
    if(s.empty()) return ans;
    
    //sorting
    sort(s.begin(),s.end());

     //first and last word
    string first=s[0];
    string last=s[s.size()-1];
    
    //compare the characters of the first and last word
    int i=0;
    while(i<first.length() && first[i]==last[i])
    {
        ans=ans+first[i];
        i++;
    }
    return ans;

}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> s(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    string result = longestCommonPrefix(s);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}