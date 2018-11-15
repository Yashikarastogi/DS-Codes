#include<iostream>
using namespace std;
void Maxheapify(int arr[], int i, int n)
{
int j,temp;
temp=arr[i];
j=2*i;
while(j<=n)
{
if((j<n)&&(arr[j]<arr[j+1]))
j++;
if(temp>arr[j])
break;
else if(temp<arr[j])
{
arr[j/2]=arr[j];
j=2*j;
}
}
arr[j/2]=temp;
return;
}
void HeapSort(int a[],int n)
{
    int i,temp;
    for(i=n;i>=2;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        Maxheapify(a,1,i-1);
    }
}
void buildMaxheap(int a[],int n)
{
    int i;
    for(i=n/2;i>=1;i--)
        Maxheapify(a,i,n);

}
int main()
{
    int n,arr[30];
    cout<<"enter no. of elements"<<" ";
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    buildMaxheap(arr,n);
    HeapSort(arr,n);
    for(int i=1;i<=n;i++)
    {
     cout<<arr[i]<<" ";
    }

}
