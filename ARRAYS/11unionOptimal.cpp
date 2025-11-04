#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> &a , vector<int> &b)
{
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j]) //i vala element chots hai
        {
            if(unionArr.size()==0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        
        else{ //j vala element chota hai
            if(unionArr.size()==0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2)
    {
        if(unionArr.size()==0 || unionArr.back() != b[j])
        {
                unionArr.push_back(b[j]);
        }
        j++;
        
    }
    while(i<n1)
    {
      if(unionArr.size()==0 || unionArr.back() != a[i])
        {
                unionArr.push_back(a[i]);
        }
        i++;
         
    }
    return unionArr;


}
int main() {
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 5, 6};

    vector<int> result = sortedArray(a, b);

    cout << "Union of sorted arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}