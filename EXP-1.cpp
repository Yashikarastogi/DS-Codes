#include<iostream>
using namespace std;
int main()
{
    int i,a[10],c,s,n,pos,m,j,flag=0,e;
    cout<<"Enter size";
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    do
    {
    cout<<endl<<"Enter choice";
    cout<<"\n1.Insert an element";
    cout<<"\n2.Delete an element";
    cout<<"\n3.Find location";
    cout<<"\n4.Display all elements";
    cin>>c;
    switch(c)
    {
        case 1:
            cout<<"enter element to be added";
            cin>>n;
            cout<<"Enter position";
            cin>>pos;
            for(i=s-1;i>=pos-1;i--)
            {
                a[i+1]=a[i];
            }
            a[pos]=n;
              for(i=0;i<=s;i++)
            {
                cout<<a[i]<<" ";
            }
            break;
        case 2:
            cout<<"enter element to be deleted";
            cin>>m;
            for(i=0;i<s;i++)
            {
                if(a[i]==m)
                {
                    j=i;
                    break;
                }
            }
            for(i=j;i<s;i++)
            {
                a[i]=a[i+1];
            }
            s--;
              for(i=0;i<s;i++)
            {
                cout<<a[i]<<" ";
            }
            break;
        case 3:
            cout<<"enter element";
            cin>>e;
             for(i=0;i<s;i++)
            {
                if(a[i]==e)
                {
                    j=i;
                    flag=1;
                    break;
                }
            }
            if(flag=1)
                cout<<"element found a position"<<j;
            else
                cout<<"element not found";
            break;
        case 4:
            {
            for(i=0;i<s;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            break;
            }
    }
}while(c!=0);
}
