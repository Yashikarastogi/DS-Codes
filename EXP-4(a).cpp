#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};
int main()
{ int option;
node *tail=NULL,*head=NULL,*temp;
do
{
    cout<<"MENU for circular linked list"<<endl<<"1.create a node"<<endl<<"2.insert at beginning"<<endl<<"3.insert at end"<<endl<<"4.insert at specific position"<<endl<<"5.deletion from beginning"<<endl<<"6.deletion from end"<<endl<<"7.deletion from specific position";
   cin>>option;
   switch(option)
   {
       case 1:
int data1;
cout<<"enter size of list";
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>data1;
node *temp=new node;
temp->data=data1;
temp->next=head;
if(head==NULL)
{
head=temp;
tail=temp;
}
else
{
tail->next=temp;
tail=tail->next;
}
}
temp=head;
cout<<"created list is"<<endl;
while(temp->next!=head)
{
    cout<<temp->data<<" "<<temp->next<<endl;
    temp=temp->next;
}
cout<<temp->data<<" "<<temp->next<<endl;
break;
       case 2:
           {

        node *temp=new node;
        node *ptr;
        int data2;
        cout<<"enter data of node";
        cin>>data2;
        temp->data=data2;
        ptr=head;
        while(ptr->next!=head)
        {
        ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=head;
        head=temp;
        ptr=head;
        cout<<"created list is"<<endl;
while(ptr->next!=head)
{
    cout<<ptr->data<<" "<<ptr->next<<endl;
    ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next<<endl;
        break;
        }
       case 3:
        {
            node *temp=new node;
        node *ptr;
        int data2;
        cout<<"enter data of node";
        cin>>data2;
        temp->data=data2;
        ptr=head;
        while(ptr->next!=head)
        {
        ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=head;
        ptr=head;
        cout<<"created list is"<<endl;
while(ptr->next!=head)
{
    cout<<ptr->data<<" "<<ptr->next<<endl;
    ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next<<endl;
        break;
        }
       case 4:
        {
            node *temp=new node;
        node *ptr;
        int data2,i=1,pos;
        cout<<"enter data of node";
        cin>>data2;
        cout<<"enter position of node";
        cin>>pos;
        temp->data=data2;
        ptr=head;
        while(i<pos-1)
        {
        ptr=ptr->next;
        i++;
        }
        temp->next=ptr->next;
        ptr->next=temp;
        ptr=head;
        cout<<"created list is"<<endl;
while(ptr->next!=head)
{
    cout<<ptr->data<<" "<<ptr->next<<endl;
    ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next<<endl;
        break;
        }
       case 5:
        {
        node *ptr;
        ptr=head;
        if(head->next==head)
        {
            head=NULL;
            delete(head);
        }
        while(ptr->next!=head)
        {
        ptr=ptr->next;
        }
        ptr->next=head->next;
        head=head->next;
        ptr=head;
        cout<<"created list is"<<endl;
while(ptr->next!=head)
{
    cout<<ptr->data<<" "<<ptr->next<<endl;
    ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next<<endl;
        break;
        }
       case 6:
        {
            node *ptr,*prev;
            ptr=head;
            while(ptr->next!=head)
            {
                prev=ptr;
                ptr=ptr->next;
            }
            prev->next=head;
            delete(ptr);
            ptr=head;
        cout<<"created list is"<<endl;
while(ptr->next!=head)
{
    cout<<ptr->data<<" "<<ptr->next<<endl;
    ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next<<endl;
        break;
        }
       case 7:
           int pos,i=1;
           node *ptr,*ptr2;
        cout<<"enter the position"<<endl;
        cin>>pos;
        ptr=head;
        while(i<pos-1)
        {
           ptr2=ptr2->next;
           i++;
        }
        ptr2=ptr->next;
        ptr->next=ptr2->next;
        delete(ptr2);
        ptr=head;
        cout<<"created list is"<<endl;
while(ptr->next!=head)
{
    cout<<ptr->data<<" "<<ptr->next<<endl;
    ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next<<endl;
        break;
   }
}while(option!=0);
}
