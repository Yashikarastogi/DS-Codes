#include<iostream>
using namespace std;
int main()
{
int i,a[20],s,n,flag=0,j,temp,num;
cout<<"Enter size ";
cin>>s;
for(i=0;i<s;i++)
{
    cin>>a[i];
}
for(i=0;i<s-1;i++)
{
    for(j=0;j<s-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(i=0;i<s;i++)
{
    cout<<a[i];
}
cout<<"Enter element to be searched ";
cin>>num;
int start=0,last=s-1,mid,pos;
while(start<=last)
{
    mid=(start+last)/2;
        if(num==a[mid])
        {
            cout<<mid;
            break;
        }
        else if(num<a[mid])
        {
            last=mid-1;
        }
        else
        {
            start=mid+1;
        }
}
if(start>last)
    cout<<"Element not found ";
}
