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
Node* convertArr2LL(vector<int> &arr)
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

void print(Node* head)
{
    while(head !=NULL)

    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* insertHead(Node* head,int val)
{
    return new Node(val,head);
}

Node* insertTail(Node* head,int val)
{
    if(head== NULL) return new Node(val);
    Node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;;
    }
    Node* newNode=new Node(val);
    temp->next = newNode;
    return head;
}
Node* insertPostion(Node* head,int el,int k)
{
    if(head==NULL)
    {
        if(k==1)
        {
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1)
    {
        return new Node(el,head); //data=el points to=head
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL)
    {   
        cnt++;
        if(cnt==(k-1))
        {
            Node* x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;

    }
    return head;
}
int main()

{
    vector<int> arr={12,5,8,7};
    Node* head = convertArr2LL(arr);
    head=insertPostion(head,145,3);
    print(head);

}