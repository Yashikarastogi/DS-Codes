#include<iostream>
using namespace std;
int main()
{
    int a[50],i,n,top=-1,j,num,ele;
    cout<<"enter the number of elements to be added";
    cin>>n;
do{
    cout<<"enter 1 for push, 2 for pop and 3 to display the top";
    cin>>j;
    switch(j)
    {
    case 1:
        if(top==n-1)
        {
            cout<<"Overflow";
            break;
        }
        else
        {
            cout<<"enter the element";
            cin>>ele;
            top=top+1;
            a[top]=ele;
            }
        break;
    case 2:
        int val;
        if(top==-1)
        {
            cout<<"Underflow";
            break;
        }
        else
        {
            val=a[top];
            top=top-1;

        }
        break;
    case 3:

        cout<<a[top];


    }
}while(j!=0);

}
