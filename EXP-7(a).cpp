#include<iostream>
using namespace std;
class circular_queue
{
private:
    int front,rear;
public:
    int arr[50];
    circular_queue()
    {
        front=0;
        rear=0;
    }
    void insertion(int x,int size1)
    {
        if((front==1 && rear==size1)||(rear==front-1))
        {

            cout<<"overflow";
        }
        else if(front==0)
        {
            front=rear=1;
        }
        else if(rear==size1)
         rear=1;
        else
         rear++;

         arr[rear]=x;
    }
    void deletion(int size1)
    {
        int value;
        if(front==0)
            cout<<"underflow";
        value=arr[front];
       if(front==rear)
        {
            front=rear=0;
        }
        else if(front==size1)
        {
            front=1;
        }
        else{
            front++;
        }
    }
    void display(int size1)
    {
        int i;
    if(front==0)
    cout<<"underflow";
    else if(front<=rear)
    {

        i=front;
        while(i<=rear)
        {
            cout<<arr[i];
            i++;
        }
    }
    else
    {
        i=front;
        while(i<=size1)
        {
            cout<<arr[i];
            i++;
        }
        i=1;
        while(i<=rear)
        {

            cout<<arr[i];
            i++;
        }
    }
    cout<<endl;
    }

};
int main()
{
    circular_queue qu;
    int size,x;
    cout<<"enter size";
    cin>>size;
    for(int j=0;j<size;j++)
    {
        cin>>x;
        qu.insertion(x,size);
    }
    qu.display(size);
    qu.deletion(size);
    cout<<"after deletion"<<endl;
    qu.display(size);
}
