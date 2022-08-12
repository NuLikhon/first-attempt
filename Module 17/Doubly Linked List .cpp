#include<bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int value;
    doublyNode *prev;
    doublyNode *Next;
    doublyNode(int val)
    {
        value=val;
        prev=NULL;
        Next=NULL;
    }
};


//Functions Prototype

void display(doublyNode* &head);
void insertionAtTail(doublyNode* &head,int val);
void insertionAtHead(doublyNode* &head,int val);
//void insertionAtSpecificposition(Node* &head,int position,int val);
//void insertionAfterSpecificvalueuniquelist(Node* &head,int searchValue,int insertValue);
//void insertionAfterSpecificvalueDuplicatelist(Node* &head,int searchValue,int insertValue);
//void insertionBeforeSpecificvalueuniquelist(Node* &head,int searchValue,int insertValue);
//int searchByvalueuniquelist(Node * &head,int value);
//Test searchByvalueduplicatelist(Node * &head,int value);
//void deletionAtHead(Node* &head);
//void deletionAtTail(Node* &head);
//void deletionAtSpecificposition(Node* &head,int position);
//void deletionByValueUniqueList(Node* &head,int searchValue);
//void deletionByValueDuplicateList(Node* &head,int searchValue);
//Node* reverseNonRecursive(Node* &head);
//Node* reverseRecursive(Node* &head);
int lengthOfLinkedlist(doublyNode* &head);

//Implementation
void insertionAtHead(doublyNode* &head,int val)
{
     doublyNode *newNode = new doublyNode(val);
     //Update of head prev
     head->prev=newNode;
    newNode->Next=head;
    head=newNode;

}
void insertionAtTail(doublyNode* &head,int val)
{
   doublyNode *newNode = new doublyNode(val);
    if(head==NULL)
    {
        head=newNode;
        return ;
    }
    else
    {
        doublyNode *temp = head;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=newNode;
        newNode->prev=temp;
    }
}
void display(doublyNode* &head)
{
doublyNode *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value;
        if(temp->Next !=NULL)
        {
            cout<<" -> ";
        }
        temp=temp->Next;
    }

}
int lengthOfLinkedlist(doublyNode* &head)
{
    int countt=0;
    doublyNode *temp=head;
    while(temp != NULL)
    {
        countt++;
        temp=temp->Next;
    }
    return countt;

}


void reverseDoubly(doublyNode *&head)
{
    doublyNode *temp=head;
    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }
    while(temp  != NULL)
    {
        cout<<temp->value;
        if(temp->prev !=NULL)
        {
            cout<<" ---> ";
        }
        temp=temp->prev;
    }
    cout<<endl;
}







int main()
{
    doublyNode *head=NULL;
    int choice=1;
    int value,position;
    cout<<"Choice 99: Display. "<<endl
    <<"Choice 98: Reverse Display non recursive way. "<<endl
    <<"Choice 97: Reverse Display  recursive way. "<<endl
    <<"Choice 1: Insertion at Tail of Linked List. "<<endl
        <<"Choice 2: Insertion at Head of Linked List. "<<endl
        <<"Choice 3: This will show you length of Linked List. "<<endl;


    while(choice != 0)
    {
        cout<<"Your Next Choice : ";
        cin>>choice;
        switch(choice)
        {
        case 99:
            cout<<endl;
            display(head);
            cout<<endl;
            break;
        case 1:
            cout<<"Enter a value which you want to insert at Tail : ";

            cin>>value;
            insertionAtTail(head,value);
            break;
        case 2:
            cout<<"Enter a value which you want to insert at Head : ";

            cin>>value;
            insertionAtHead(head,value);
            break;
        case 3:
            cout<<"The Length of LL is : "<<lengthOfLinkedlist(head)<<endl;
            break;

                    case 98:
                      reverseDoubly(head);
                        break;
//                         case 97:
//                       head= reverseRecursive(head);
//                        break;


        }

    }
    cout<<endl;
    cout<<"Final List look: "<<endl;
    display(head);
    cout<<endl;

    return 0;
}

