#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value=val;
        Next=NULL;

    }
};

void insertAtTail(Node* &head,int val)
{
    Node *newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->Next != NULL)
    {
        temp=temp->Next;
    }
    temp->Next=newNode;
}

void insertAtHead(Node* &head,int val)
{
    Node *newNode = new Node(val);
    newNode->Next=head;
    head=newNode;
}
void display(Node *n)
{
    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout<<" -> ";
        }
        n=n->Next;
    }

}
void displaydd(Node *n)
{

        cout<<n->Next->Next->value;


}
void  reversedListPrint(Node* head)
{

    if (head == NULL)
    return;

    reversedListPrint(head->Next);
    cout << head->value<<" " ;


}

int main()
{
    Node *head=NULL;
        cout<<"choice 1: Insert at Head "<<endl<<"choice 2: Insert at Tail"<<endl<<"Choice 3: Exit "<<endl;
    int choice=2;
    while(choice==2 || choice ==1 || choice==3)
    {
        cout<<" Enter the value :";
        int n;
        cin>>n;


        if(choice==1)
        {
            insertAtHead(head,n);
        }
        else if(choice==2)
        {
            insertAtTail(head,n);
        }

        cout<<" Next choice: ";
        cin>>choice;
          if(choice==3)
        {
            break;
        }
    }

    cout<<"Normal Display :"<<endl;
    display(head);
    cout<<endl;
    cout<<"Reverse Display : "<<endl;
    reversedListPrint(head);

    displaydd(head);

    return 0;
}
