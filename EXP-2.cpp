#include<iostream>
using namespace std;
int main()
{
int i,a[20],s,n,flag=0,pos;
cout<<"Enter size ";
cin>>s;
for(i=0;i<s;i++)
{
    cin>>a[i];
}
cout<<"Enter element to be searched ";
cin>>n;
for(i=0;i<s;i++)
{
    if(n==a[i])
    {
        flag=1;
        pos=i;
    }
}
if(flag==1)
{
cout<<"Element found at "<<pos<<"position";
}
else
{
    cout<<"Element not found";
}
}
