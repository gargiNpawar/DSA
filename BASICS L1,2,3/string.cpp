#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Striver";
    cout<<s[2]<<endl;
    int len=s.size();
    cout<<len<<endl; //total size=6
    cout<<s[len-1]<<endl;  //last index =7-1=s[6]
    s[len-1]='z';
    cout<<s[len-1];
    return 0;
}