#include<iostream>
using namespace std;
void Merge(int *A,int p,int q,int r)
{
    int n1,n2,i,k,j;
    n1=q-p+1;
    n2=r-q;
    int l[10],s[10];
    for(i=1;i<=n1;i++)
    {
        l[i]=A[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        s[j]=A[q+j];
    }
    l[n1+1]=10000;
    s[n2+1]=10000;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(l[i]<=s[j])
        {
            A[k]=l[i];
            i++;
        }
        else
        {
            A[k]=s[j];
            j=j+1;
        }
    }

}
void display(int *A,int r)
{
    for(int k=1;k<=r;k++)
    {
        cout<<A[k]<<endl;
    }
}
   void  MergeSort(int *A,int p,int r)
    {
        int q;
        if(p<r)
        {
            q=(p+r)/2;
            MergeSort(A,p,q);
            MergeSort(A,q+1,r);
            Merge(A,p,q,r);
        }

    }

int main()
{
    int p,q,r,i;
    cout<<"Enter size";
    cin>>r;
    int A[r];
    for(i=1;i<=r;i++)
    {
        cin>>A[i];

    }
    p=1;
    MergeSort(A,p,r);
    display(A,r);
}
