#include<bits/stdc++.h>
using namespace std;
/*
void printDivisor(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)         //TIME COMPLEXITY=O(N)
        {
            cout<<i<<" ";
        }
    }
}
//this is a void function so need for return 
int main()
{
    int num;
    cin>>num;
    printDivisor(num);
    return 0;


}
*/            
//OR appoarch 2 with list
void printDivisor(int n)
{    
    vector<int> ls;
    //tc=O(sqrt(n))
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){                   
                ls.push_back(n/i);
            }
        }

    }
    //tc=O(no of  factors * log(no of factors))
    sort(ls.begin(),ls.end());
    //tc=O(no of factors)
    for(auto it:ls) cout<<it<<" ";
}
int main()
{
    int n;
    cin>>n;
    printDivisor(n);
    return 0;
}
