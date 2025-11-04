#include<bits/stdc++.h>
using namespace std;
void reverseCharArray(vector<char> &str)
{
    int st=0; int end=str.size()-1;
    while(st<end)
    {
        swap(str[st],str[end]);
        st++;
        end--;

    }
}
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // allows spaces too

    // Convert string to vector<char>
    vector<char> str(input.begin(), input.end());

    reverseCharArray(str);

    cout << "Reversed string: ";
    for (char ch : str)
    {
        cout << ch;
    }
    cout << endl;

    return 0;
}
