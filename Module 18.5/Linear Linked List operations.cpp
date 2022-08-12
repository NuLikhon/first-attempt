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
struct Test
{
    int positions[1000];
};

//Functions Prototype

void display(Node* &head);
void insertionAtTail(Node* &head,int val);
void insertionAtHead(Node* &head,int val);
void insertionAtSpecificposition(Node* &head,int position,int val);
void insertionAfterSpecificvalueuniquelist(Node* &head,int searchValue,int insertValue);
void insertionAfterSpecificvalueDuplicatelist(Node* &head,int searchValue,int insertValue);
void insertionBeforeSpecificvalueuniquelist(Node* &head,int searchValue,int insertValue);
int searchByvalueuniquelist(Node * &head,int value);
Test searchByvalueduplicatelist(Node * &head,int value);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);
void deletionAtSpecificposition(Node* &head,int position);
void deletionByValueUniqueList(Node* &head,int searchValue);
void deletionByValueDuplicateList(Node* &head,int searchValue);
Node* reverseNonRecursive(Node* &head);
Node* reverseRecursive(Node* &head);
int lengthOfLinkedlist(Node* &head);

//Implementation
void insertionAtHead(Node* &head,int val)
{
    Node *newNode = new Node(val);
    newNode->Next=head;
    head=newNode;
}
void insertionAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return ;
    }
    else
    {
        Node *temp = head;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=newNode;
    }

}
void display(Node* &head)
{
    Node *temp=head;
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
int lengthOfLinkedlist(Node* &head)
{
    int countt=0;
    Node *temp=head;
    while(temp != NULL)
    {
        countt++;
        temp=temp->Next;
    }
    return countt;
}
void insertionAtSpecificposition(Node* &head,int position,int val)
{
    int i=0;
    Node *temp=head;
    if(position==1)
    {
        insertionAtHead(head,val);
    }
    else
    {
        while(i<position-2)
        {
            temp=temp->Next;
            i++;
        }
        Node *newNode= new Node(val);

        newNode->Next=temp->Next;
        temp->Next=newNode;
    }



}
int searchByvalueuniquelist(Node * &head,int value)
{
    Node *temp=head;
    int countt=1;
    int flag=0;
    if(temp==NULL)
    {
        cout<<"The List is Empty, Please Insert element first then search."<<endl;
        return -1;
    }
    else
    {
       while(temp != NULL)
    {
       if(temp->value==value)
            {

               //countt++;
                flag=1;
                break;

            }

            temp=temp->Next;
            countt++;

    }
    if(flag==0)
    {
        cout<<"The value you searching for is not found in this list."<<endl;
        return -1;
    }
    else{
        return countt;
    }
    }



}
Test searchByvalueduplicatelist(Node * &head,int value)
{
    Node *temp=head;
    Test T;

    int countt=1,k=1;
    int flag=0;
    if(temp==NULL)
    {
        cout<<"The List is Empty, Please Insert element first then search."<<endl;
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->value==value)
            {
                T.positions[k]=countt;
                k++;
                flag=1;

            }

            temp=temp->Next;
            countt++;
        }
        //cout<<"K :"<<k;
        T.positions[0]=k;
    }
    if(flag==0)
    {
        cout<<"The value you searching for is not found in this list."<<endl;
    }

    return T;
}
void insertionAfterSpecificvalueuniquelist(Node* &head,int searchValue,int insertValue)
{
    Node *temp=head;
    if(temp==NULL)
    {
        cout<<"The list is empty."<<endl;
    }
    else
    {
        while(temp->value!=searchValue)
    {
        temp=temp->Next;
    }
    Node *newNode =new Node(insertValue);
    newNode->Next=temp->Next;
    temp->Next=newNode;
    }

}
void insertionBeforeSpecificvalueuniquelist(Node* &head,int searchValue,int insertValue)
{
    Node *temp=head;
    int countt=1;
    if(temp==NULL)
    {
        cout<<"The list is empty."<<endl;
    }
    else
    {
      while(temp->value!=searchValue)
    {
        temp=temp->Next;
        countt++;
    }
    }
    if(countt==1)
    {
        insertionAtHead(head,insertValue);
    }
    if(countt>1)
    {
        insertionAtSpecificposition(head,countt-1,insertValue);
    }


}
void insertionAfterSpecificvalueDuplicatelist(Node* &head,int searchValue,int insertValue)
{
    Node *temp=head;
//    if(temp==NULL)
//    {
//         cout<<"The list is empty."<<endl;
//    }
//    else
//    {
        Test T;
        T=searchByvalueduplicatelist(head,searchValue);
        for(int i=1;i<T.positions[0];i++)
        {
            insertionAtSpecificposition(head,T.positions[i]+1,insertValue);

            T.positions[i+1]+=i;
            //cout<<"i+1 value: "<<T.positions[i+1]<<endl;
        }
        cout<<endl;
   // }
}
void deletionAtHead(Node* &head)
{
    Node *temp=head;
    head=temp->Next;
    delete temp;
}
void deletionAtTail(Node* &head)
{
        Node *temp=head;
        if(temp->Next==NULL)
        {
            deletionAtHead(head);
        }
        else
        {
             while(temp->Next->Next !=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=NULL;
        }

}
void deletionAtSpecificposition(Node* &head,int position)
{
    Node *temp=head;
    if( position<=lengthOfLinkedlist(head))
    {
        if(position==1)
        {
            deletionAtHead(head);
        }
        else if(position==lengthOfLinkedlist(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int countt=1;
    while(countt<position-1)
    {

        temp=temp->Next;

        countt++;
    }
    Node *delNode=temp->Next;
    temp->Next=delNode->Next;
    delete delNode;
        }
    }
    else
    {
        cout<<" Position is out of Bound. "<<endl;
    }


}
void deletionByValueUniqueList(Node* &head,int searchValue)
{
    Node *temp=head;
    int countt=1;
    while(temp->value != searchValue)
    {
        countt++;
        temp=temp->Next;
    }
    deletionAtSpecificposition(head,countt);
}
void deletionByValueDuplicateList(Node* &head,int searchValue)
{
    Node *temp=head;
    Test T;
    T=searchByvalueduplicatelist(head,searchValue );
    for(int i=1;i<T.positions[0];i++)
        {
            deletionAtSpecificposition(head,T.positions[i]);

            T.positions[i+1]-=i;
            //cout<<"i+1 value: "<<T.positions[i+1]<<endl;
        }
        cout<<endl;

}
Node* reverseNonRecursive(Node* &head)
{
    Node *temp=head;
    Node *prev=NULL;
    Node *current=temp;
    if(head==NULL)
    {
        cout<<"The list is empty."<<endl;

        return temp;
    }

        Node *next=temp->Next;



    while(1)
    {
      current->Next=prev;
    prev=current;
    current=next;
    if(current==NULL)
    {
        break;
    }
    next=next->Next;
    }
    return prev;

}
Node* reverseRecursive(Node* &head)
{
    //Base Call
    if(head==NULL || head->Next==NULL)
    {
        if(head==NULL)
        {
            cout<<"The List is empty."<<endl;
        }
        return head;
    }

    //Recursive Call
    Node *newHead=reverseRecursive(head->Next);
    head->Next->Next=head;
    head->Next=NULL;

    return newHead;

}
int main()
{
    Node *head=NULL;
    int choice=1;
    int value,position;
    cout<<"Choice 99: Display. "<<endl
    <<"Choice 98: Reverse Display non recursive way. "<<endl
    <<"Choice 97: Reverse Display  recursive way. "<<endl
    <<"Choice 1: Insertion at Tail of Linked List. "<<endl
        <<"Choice 2: Insertion at Head of Linked List. "<<endl
        <<"Choice 3: This will show you length of Linked List. "<<endl
        <<"Choice 4: Insertion at specific Position . "<<endl
        <<"Choice 5: Search by Value in unique List . "<<endl
        <<"Choice 6: Search by Value in Duplicate List . "<<endl
        <<"Choice 7: Insertion after a specific value in Unique List . "<<endl
        <<"Choice 8: Insertion Before a specific value  in Unique List . "<<endl
        <<"Choice 9: Insertion After  a specific value in Duplicate Enabled List . "<<endl
        <<"Choice 10: Deletion at Head . "<<endl
        <<"Choice 11: Deletion at Tail . "<<endl
        <<"Choice 12: Deletion at Specific Position . "<<endl
        <<"Choice 13: Deletion By Value in Unique List . "<<endl
        <<"Choice 14: Deletion By Value in Duplicate Enabled List . "<<endl;

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
        case 4:
            cout<<" Please Enter the position you want to insert :";
            cin>>position;
            cout<<" Enter the value which you want to insert :";
            cin>>value;
            insertionAtSpecificposition(head,position,value);
            break;
        case 5:

            cout<<" Enter the value which you want to search :";
            cin>>value;


                int ddd;
                ddd=searchByvalueuniquelist(head,value);
                if(ddd!=-1)
                {
                    cout<<"The searching value is at position : "<<ddd<<endl;
                }



            break;

        case 6:

            cout<<" Enter the value which you want to search :";
            cin>>value;
            cout<<"The searching value's positions are : "<<endl;

            Test T;
            T=searchByvalueduplicatelist(head,value);
            for(int i=1; i<T.positions[0]; i++)
            {
                cout<<T.positions[i]<<" ";
            }
            break;

            case 7:
            cout<<" Please Enter the Value whose next you want to insert :";
            cin>>position;
            cout<<" Enter the value which you want to insert :";
            cin>>value;
            insertionAfterSpecificvalueuniquelist(head, position,value);
            break;
            case 8:
            cout<<" Please Enter the Value whose before you want to insert :";
            cin>>position;
            cout<<" Enter the value which you want to insert :";
            cin>>value;
            insertionBeforeSpecificvalueuniquelist(head, position,value);
            break;
            case 9:
            cout<<" Please Enter the Value whose After you want to insert :";
            cin>>position;
            cout<<" Enter the value which you want to insert :";
            cin>>value;
            insertionAfterSpecificvalueDuplicatelist(head,position,value);
            break;
            case 10:
                deletionAtHead(head);
                break;
                 case 11:
                deletionAtTail(head);
                break;
                 case 12:
                     cout<<"Enter your desired element position which one you want to delete.";
                     cin>>position;
                    deletionAtSpecificposition(head,position);
                    break;
                    case 13:
                     cout<<"Enter your desired element  which one you want to delete.";
                     cin>>position;
                    deletionByValueUniqueList(head,position);
                    break;
                    case 14:
                     cout<<"Enter your desired element  which one you want to delete.";
                     cin>>position;
                    deletionByValueDuplicateList(head,position);
                    break;
                    case 98:
                       head= reverseNonRecursive(head);
                        break;
                         case 97:
                       head= reverseRecursive(head);
                        break;


        }

    }
    cout<<endl;
    cout<<"Final List look: "<<endl;
    display(head);
    cout<<endl;

    return 0;
}
