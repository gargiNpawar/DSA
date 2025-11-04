#include<bits/stdc++.h>
using namespace std;
string frequencyCount(string s)
{   
    // ASCII map to count frequency and store character
    vector<pair<int,char>> freq(128,{0,0}); // vector of 128 pairs 
    /*
    first = frequency count (how many times the character appears)
    second = the character itself
    If c = 'a' (ASCII 97), then freq[97].first++ increases the count of 'a'
    */

    //count frequency
    for(char c:s)
    {
        freq[c].first++;
        freq[c].second=c;
    //'a' appears 2 times → freq[97].first = 2, freq[97].second = 'a'
    }
    // Sort by frequency (ascending)
    sort(freq.begin(), freq.end());

    // Build result in reverse to get highest frequency first
    string result="";
    for(int i=127;i>=0;i--)
    {
        result+=string(freq[i].first ,freq[i].second);
                     // size n,char n times
    }
    //It creates a string of length n consisting of the character c repeated n times
    return result;

}
int main() {
    string s = "aabbbc";
    cout << frequencyCount(s) << endl;
    return 0;
}


