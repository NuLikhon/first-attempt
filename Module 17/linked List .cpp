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
    int position[1000];
};
void InsertTail(Node* &head,int val);
void InsertHead(Node* &head,int val);
void display(Node *n);
int countLength(Node* &head);
void insertionAtspecificposition(Node *&head,int pos,int val);
int searchByvalueunique(Node *&head,int val);
void searchByvalueduplicate(Node *&head,int val);
Test searchByvalueReturn(Node *&head,int val);
void insertByValueUnique(Node* &head,int searchvalue,int value);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);
void deletionAtspecificPosition(Node* &head,int position);
void deletionByvalueunique(Node* &head,int value);
int countLength(Node* &head)
{
    int countt=0;
    Node *temp=head;
    while(temp != NULL)
    {
        temp=temp->Next;
        countt++;

    }
    return countt;
}
void InsertTail(Node* &head,int val)
{
    Node *newNode= new Node(val);
    if(head == NULL)
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

void InsertHead(Node* &head,int val)
{
    Node *newNode = new Node(val);
    newNode->Next=head;
    head=newNode;

}
void display(Node *n)
{
    while(n  != NULL)
    {
        cout<<n->value<<" ";
        n=n->Next;
    }

}
void insertionAtspecificposition(Node *&head,int pos,int val)
{
    int i=0;
    Node *temp=head;
    while(i<pos-2)
    {
        temp=temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next=temp->Next;
    temp->Next=newNode;
}
int searchByvalueunique(Node *&head,int key)
{
    Node *temp=head;
    int countt=1;
    if(temp==NULL)
    {
        return -1;
    }

    while(temp->value!=key)
    {
        if(temp->Next==NULL)
        {
            return -1;
        }

        temp=temp->Next;
        countt++;
    }
    return countt;
}
void searchByvalueduplicate(Node *&head,int key)
{
    Node *temp=head;
    int countt=1;
    int flag=0,k=1;
    int sizee=countLength(head);
    int pos[sizee+1];
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            pos[k]=countt;
            k++;
            // cout<<countt<<" ";
            flag=1;

        }
        temp=temp->Next;
        countt++;
    }
    if(flag==0)
    {
        cout<<"The search value is not in the list."<<endl;
    }
    else
    {
        pos[0]=k;
        cout<<"The value is found at:";
        for(int i=1; i<pos[0]; i++)
        {
            cout<<pos[i];
            if(i<pos[0]-1)
                cout<<",";
        }
    }
    cout<<endl;
}
Test searchByvalueReturn(Node *&head,int key)
{
    Test T;
    Node *temp=head;
    int countt=1;
    int flag=0,k=1;

    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            T.position[k]=countt;
            k++;
            // cout<<countt<<" ";


        }
        temp=temp->Next;
        countt++;
    }
    T.position[0]=k;
    return T;

}

void insertByValueUnique(Node* &head,int searchvalue,int value)
{
    int position;
    position=searchByvalueunique(head,searchvalue);
    //step2 insert the value at position+1
    insertionAtspecificposition(head,position+1,value);
}
void deletionAtHead(Node* &head)
{
    Node* temp=head;
    if(temp != NULL)
    {
        head=temp->Next;
        delete temp;
    }
    else
    {
        cout<<"There is no value in this linked list."<<endl;
    }

}
void deletionAtTail(Node* &head)
{
    Node* temp=head;
    if(temp !=NULL && temp->Next != NULL)
    {
        while(temp->Next->Next != NULL)
        {
            temp=temp->Next ;

        }
        Node *delNode=temp->Next;
        temp->Next=NULL;
        delete delNode;
    }
    else
    {
        if(temp==NULL)
        {
            cout<<"There is no value in list"<<endl;
        }
        //if(temp->Next==NULL)
        else deletionAtHead(head);
    }



}
void deletionAtspecificPosition(Node* &head,int position)
{
    Node *temp=head;

    if( position<=countLength(head))
    {
        if(position==1)
        {
            deletionAtHead(head);
        }
        else if(position==countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i=1;
            while(i<position-1)
            {
                temp=temp->Next;
                i++;
            }
            Node *delNode=temp->Next;
            temp->Next=delNode->Next;
            delete delNode;
        }

    }
    else
    {
//        if(position>countLength(head))
//        {
            cout<<"Position out of Bound.";
//        }
//        else{
//            cout<<"There is no value in Linked List. "<<endl;
//        }
        //position is out of range
        //ll is NULL

    }
}
void deletionByvalueunique(Node* &head,int value)
{
    // find position of the value
    int position=searchByvalueunique(head,value);
    if(position==-1)
    {
        cout<<"Position value not found in the Linked list."<<endl;
    }
    else
    {
        deletionAtspecificPosition(head,position);
    }

}
int main()
{
    Node *head=NULL;
    int value;
    int position;
    cout<<" Choice 1: Insertion at Head" <<endl
        <<" Choice 2: Insertion at Tail" <<endl
        <<" Choice 3: Insert at specific position "<<endl
        <<" Choice 4: Search with specific value "<<endl
        <<" Choice 5: Search a value in a duplicated list "<<endl
        <<" Choice 6: Insertion after a specific value in unique list "<<endl
        <<" Choice 7: Insertion after a specific value in duplicate list "<<endl
        <<" Choice 8: Deletion at Head "<<endl
        <<" Choice 9: Deletion at Tail "<<endl
        <<" Choice 10: Deletion at a specific postion  "<<endl
        <<" Choice 11: Deletion by value in unique list  "<<endl
        <<" Choice 12: Deletion by value in duplicate enabled list  "<<endl;

    cout<<"Next Choice: ";
    int choice;
    cin>>choice;
    while(choice != 0)
    {

        switch(choice)
        {
        case 1:
            cout<<" Enter the Value: ";
            cin>>value;
            InsertHead( head,value);
            break;

        case 2:
            cout<<" Enter the Value: ";
            cin>>value;
            InsertTail( head,value);
            break;
        case 3:
            cout<<"Enter the Desired position: ";
            cin>>position;
            cout<<" Enter the Value: ";
            cin>>value;
            insertionAtspecificposition(head,position,value);
            break;
        case 4:

            cout<<" Enter the Value to search: ";
            cin>>value;
            position=searchByvalueunique(head,value);
            if(position!=-1)
            {
                cout<<"The number is at position : "<<position<<endl;
            }
            else
            {
                cout<<" The number is not found at list."<<endl;
            }
            break;
        case 5:

            cout<<" Enter the Value to search: ";
            cin>>value;
            //cout<<"The number is at positions: ";
            //searchByvalueduplicate(head,value);
            Test T;
            T=searchByvalueReturn(head,value);

//        position=searchByvalueunique(head,value);
            if(T.position[0]==1)
            {
                cout<<"The number is not found at list : "<<endl;
            }
            else
            {
                int sizee=T.position[0];
                cout<<" The number is not found at list."<<endl;
                for(int i=1; i<sizee; i++)
                {
                    cout<<T.position[i];
                    if(i<sizee-1)cout<<" , ";
                }
                cout<<endl;

            }
            break;
        case 6:
            cout<<"Enter the value to search :";
            int searchvalue;
            cin>>searchvalue;
            cout<<endl<<"Enetr the value to insert :";
            cin>>value;
            insertByValueUnique(head,searchvalue,value);
            break;
        case 8:
            deletionAtHead(head);
        case 9:
            deletionAtTail(head);
            break;
        case 10:

            if(head==NULL)
            {
                cout<<"There is no value in LL.";
                break;
            }
            else
            {
                cout<<"Enter the desired position: ";
            cin>>position;
              deletionAtspecificPosition(head,position);
            cout<<endl;
            display(head);
            }

            break;
        case 11:
            cout<<"Enter the value to delete.:";
            int delvalue;
            cin>>delvalue;
            deletionByvalueunique(head,delvalue);
            break;


        default:
            break;
        }
        cout<<" Next Choice: ";
        cin>>choice;
    }

    cout<<"Linked List ";
    display(head);
    cout<<endl<<" Length of Linked List: "<<countLength(head)<<endl;

    return 0;
}
