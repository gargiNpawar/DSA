#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s,string t)
{
    if(s.length() != t.length()) return false;

    char map_s[128]= {0}; // ASCII map for string s
    char map_t[128]= {0}; // ASCII map for string t

    int len=s.size();
    for(int i=0; i<len ;i++)
    {
        if(map_s[s[i]] != map_t[t[i]]){
            return false;
        }
        map_s[s[i]] = i + 1;  
        map_t[t[i]] = i + 1;
    }
    return true;
}
int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    if (isIsomorphic(s, t))
        cout << "The strings are isomorphic." << endl;
    else
        cout << "The strings are not isomorphic." << endl;

    return 0;
}
