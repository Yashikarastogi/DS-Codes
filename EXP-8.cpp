#include<iostream>
using namespace std;
int main()
{
int i,arr[30],j,n,key,k;
cout<<"enter size of array";
cin>>n;
for (i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"original array"<<endl;
for (i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
for(j=1;j<n;j++)
    {
        key=arr[j];
        k=j-1;
        while(k>=0 && arr[k]>key)
        {

            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=key;
    }
    cout<<"final array is"<<endl;
for (i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}


