#include<iostream>
using namespace std;
struct node{
int data;
node *next,*prev;
};
int main()
{
    int option;
    node *head=NULL,*tail=NULL,*ptr;
    do
    {
        cout<<"MENU for doubly linked list"<<endl<<"1.create a node"<<endl<<"2.insert at beginning"<<endl<<"3.insert at end"<<endl<<"4.insert at specific position"<<endl<<"5.deletion from beginning"<<endl<<"6.deletion from end"<<endl<<"7.deletion from specific position";
   cin>>option;
   switch(option)
   {
   case 1:
       {
       int data1,n;
       cout<<"enter size of list"<<endl;
       cin>>n;
       for(int i=0;i<n;i++)
       {
    node *temp=new node;
    cin>>data1;
    temp->data=data1;
    temp->next=NULL;
    temp->prev=tail;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
    }
       }
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
    }
    cout<<endl;
    break;
       }

   case 2:
    {
        node *temp=new node;
        node *ptr;
        ptr=head;
        int data2;
        cout<<"enter data you want to insert"<<endl;
        cin>>data2;
        temp->data=data2;
        temp->prev=NULL;
        ptr->prev=temp;
        temp->next=head;
        head=temp;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
        }
        cout<<endl;
        break;
    }
   case 3:
    {
        node *temp=new node;
        node *ptr;
        ptr=head;
        int data2;
        cout<<"enter data you want to insert"<<endl;
        cin>>data2;
        temp->data=data2;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
         temp->prev=ptr;
        temp->next=NULL;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
        }
        cout<<endl;
        break;
    }
   case 4:
    {
        node *temp=new node;
        node *ptr;
        ptr=head;
        int data2,pos,i=1;
        cout<<"enter data you want to insert"<<endl;
        cin>>data2;
        temp->data=data2;
        cout<<"enter position where you want to insert"<<endl;
        cin>>pos;
        while(i<pos-1)
        {
            ptr=ptr->next;
            i++;
        }
        temp->prev=ptr;
        temp->next=ptr->next;
        ptr->next=temp;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
        }
        cout<<endl;
        break;
    }
   case 5:
    {
        node *ptr;
        ptr=head;
        ptr->next->prev=NULL;
        head=ptr->next;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
        }
        cout<<endl;
        break;
    }
   case 6:
    {
        node *ptr;
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
        }
        cout<<endl;
        break;
    }
    case 7:
        {
          int pos,i=1;
           node *ptr,*ptr2,*ptr1;
        cout<<"enter the position"<<endl;
        cin>>pos;
        ptr=head;
        while(i<pos-1)
        {
           ptr=ptr->next;
           i++;
        }
        ptr1=ptr->next;
        ptr2=ptr1->next;
        ptr2->prev=ptr;
        ptr->next=ptr2;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<endl<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
        ptr=ptr->next;
        }
        cout<<endl;
        break;
        }
    }
    }while(option!=0);
}
