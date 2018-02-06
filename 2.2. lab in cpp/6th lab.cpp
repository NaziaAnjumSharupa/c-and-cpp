#include<iostream>
#include<conio.h>
#define INF 999999999
using namespace std;
int a,b,u,v,n,i,j,k,ne=1;
int mini,mincost=0,cost[9][9],parent[9];
long int m[20][20];
int s[20][20],p[20];
int find1(int);
int uni(int,int);
void print_optimal(int,int);
void matmultiply(void);
Kruskals()
{
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the adjacency matrix :"<<endl;
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
    {
        cin>>cost[i][j];
    if(cost[i][j]==0)
        cost[i][j]=999;
    }
        }
        cout<<"The edges of minimum cost spanning tree are: "<<endl;
        while(ne<n)
        {
            for(i=1,mini=999;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(cost[i][j]<mini)
                    {
                        mini=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
            u=find1(u);
            v=find1(v);
            if(uni(u,v))
            {
                cout<<ne++<<" edge ("<<a<<","<<b<<")="<<mini<<endl;
                mincost+=mini;
            }
            cost[a][b]=cost[b][a]=999;
        }
        cout<<"MInimum cost = "<<mincost<<endl;
}
int find1(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
void print_optimal(int i,int j)
{
    if(i==j)
        cout<<"A "<<i;
}
void matmultiply(void)
{
    long int q;
    int k;
    for(i=n;i>0;i--)
    {
        for(j=i;j<=n;j++)
        {
            if(i==j)
                m[i][j]=0;
            else
            {
                for(k=i;k<j;k++)
                {
                    q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                    if(q<m[i][j])
                        {
                            m[i][j]=q;
                            s[i][j]=k;
                        }
                }
            }
        }
    }
}
MatChainMult()
{
    int k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
    {
        m[i][i]=0;
        m[i][j]=INF;
        s[i][j]=0;
    }
    cout<<"Enter the dimensions: "<<endl;
    for(k=0;k<=n;k++)
    {
    cout<<"P"<<k<<": ";
    cin>>p[k];
    }
    matmultiply();
    cout<<"Cost Matrix M: "<<endl;
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j++)
        cout<<"m["<<i<<"]["<<j<<"]: "<<m[i][j]<<endl;
    cout<<endl<<"Matrix S for K values: "<<endl;
    for(i=1;i<=n;i++)
        for(j=i;j<n;j++)
        cout<<"m["<<i<<"]["<<j<<"]: "<<s[i][j]<<endl;
    i=1,j=n;
    print_optimal(i,j);
}
int main()
{
    int choice;
    cout<<"Enter your choice: "<<endl<<"1. Kruskal's Algorithm"<<endl<<"2. Matrix-Chain Multiplication"<<endl;
    cin>>choice;
    switch(choice)
    {
case 1:
    Kruskals();
    break;
case 2:
    MatChainMult();
    break;
default:
    cout<<"Invalid choice!"<<endl;
    }
    return 0;
}

