#include<bits/stdc++.h>
using namespace std;
string removeOccurences(string s,string part)
{
    while(s.length()>0 && s.find(part)< s.length())
    {
        s.erase(s.find(part),part.length()); //s.find(part)..returns position
    }
    return s;
}
int main()
{
    string s, part;
    cout << "Enter the main string: ";
    getline(cin, s);

    cout << "Enter the part to remove: ";
    getline(cin, part);

    string result = removeOccurences(s, part);
    cout << "String after removing occurrences: " << result << endl;

    return 0;
}