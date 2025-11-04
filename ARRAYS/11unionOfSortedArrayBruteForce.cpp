#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> &a , vector<int> &b)
{
    int n1=a.size();
    int n2=b.size();
    set<int> st; //declare a set
    for(int i=0;i<n1;i++)
    {
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        st.insert(b[i]);
    }
    vector<int> temp; //declare a final array 
    for(auto it: st)
    {
        temp.push_back(it);
    }
    return temp;
}
int main()
{
    vector<int> a={1,3,5,7};
    vector<int> b={2,3,5,6,8};
    vector<int> result= sortedArray(a,b);
    cout << "Merged Sorted Array without Duplicates: ";
    for(int num : result)
    {
        cout<<num<<" ";
    }
    return 0;

}