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
    Node* covertArr2LL(vector<int> &arr)
    {
        Node* head=new Node(arr[0]);
        Node* mover=head; //poits to head
        for(int i=1;i<arr.size();i++)
        {
            Node* temp=new Node(arr[i]);
            mover->next=temp; //points to the temp
            mover=temp; //move ahead the mover

        }
        return head;
    }
    

int main()
{
    vector<int> arr={2,5,8,7};
    Node* head=covertArr2LL(arr);
    cout<< head->data <<endl; //prints only the head element
    
    //traversal through linked list
    Node* temp=head; //points to head/first element
    while(temp)
    {
        cout<< temp->data<<" ";
        temp=temp->next;

    }

}
