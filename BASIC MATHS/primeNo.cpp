#include<bits/stdc++.h>
using namespace std;
//brute force approach is the first method that comes in the mind for any question
int main()
{   
    int n;
    cin>>n;
    int cnt=0;
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            if((n/i)!=i) cnt++;
        }
    }
    cout<<"is "<<n<<" a prime no or not? "<<endl;
    if(cnt==2) 
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;

    return 0;

}