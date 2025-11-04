#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    //constructors
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
int main()
{
    vector<int> arr={2,5,8,7};
    Node* y=new Node(arr[0],nullptr);
    cout<< y <<endl; //returns memory location
    cout<< y->data<<endl;

    Node x=Node(arr[1],nullptr); //just an object
    cout<< x.data<<endl;
    cout<< x.next<<endl;

}