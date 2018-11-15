#include<iostream>
using namespace std;
int cost[10][10],i,j,k,qu[10],front,rear,v,visit[10],visited[10];
int main()
{

    int m,n;
    cout<<"Enter the number of vertices";
    cin>>n;
    cout<<"Enter the no of edges";
    cin>>m;
    cout<<"\n Edges \n";
    for(k=1;k<=m;k++)
    {
        cin>>i>>j;
        cost[i][j]=1;
    }
    cout<<"Enter initial vertex";
    cin>>v;
    cout<<"Visited Vertices";
    cout<<v;
    visited[v]=1;
    k=1;

    while(k<n)
    {
        for(j=1;j<=n;j++)

        {
            if(cost[v][j]!=0 &&visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rear++]=j;

            }
        }
        v=qu[front++];
        cout<< v<< "  ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}
