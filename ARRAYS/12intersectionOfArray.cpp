#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &a , vector<int> &b ,int n,int m )
{
    vector<int> ans;
    int vis[m] ={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j] && vis[j]==0)
            {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}
int main() {
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 5};
    int n = a.size();
    int m = b.size();

    vector<int> result = findArrayIntersection(a, b, n, m);

    cout << "Intersection of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}