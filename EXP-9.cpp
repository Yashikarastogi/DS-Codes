#include<iostream>
using namespace std;
int split(int *a,int lower,int upper)
{
    int temp;
    int p=lower+1;
    int q=upper;
    int pivot=a[lower];
    while(q>=p)
    {
        while(a[p]<pivot)
            p++;
        while(a[q]>pivot)
            q--;
        if(q>p)
        {
            temp=a[p];
            a[p]=a[q];
            a[q]=temp;
        }
    }
    temp=a[lower];
    a[lower]=a[q];
    a[q]=temp;
    return q;
}
void QuickSort(int arr[],int lower,int upper)
{
    if(upper>lower)
    {

        int i=split(arr,lower,upper);
        QuickSort(arr,lower,i-1);
        QuickSort(arr,i+1,upper);
    }
}
int main()
{
    int n,arr[30];
    cout<<"enter size"<<" ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    QuickSort(arr,0,n-1);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
