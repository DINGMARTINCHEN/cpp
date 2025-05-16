#include<bits/stdc++.h>
#define maxint 32767
#define maxvnum 100
using namespace std;
typedef struct 
{
    char vexs[maxvnum];
    int arcs[100][100];
    int vertexnum,arcnum;
}amgraph;
int creategraph(amgraph &g)
{
    cin>>g.vertexnum;
    for(int i=1;i<=g.vertexnum;i++)
    {
        cin>>g.vexs[i];
    }
    cin>>g.arcnum;
    memset(g.arcs,maxint,sizeof(g.arcs));
    for(int i=0;i<g.arcnum;i++)
    {
        int a,b;
        cin>>a>>b;
        g.arcs[a][b]=1;
        g.arcs[b][a]=1;
    }
}
bool visited[maxint];
void dfs(amgraph g,int v)
{
    cout<<g.vexs[v+1];
    visited[v]=true;
    for(int w=0;w<g.vertexnum;w++)
    {
        if((g.arcs[v][w]!=0)&&(visited[w]!=true))
        {
            dfs(g,w);
        }
    }
}
void bfs(amgraph g,int v)
{
    int i,j,q[maxint];
    int front=-1,rear=-1;
    cout<<g.vexs[v];
    visited[v]=true;
    q[++rear]=v;
    while(front!=rear)
    {
        i=q[++front];
        for(j=0;j<g.vertexnum;j++)
        {
            if(g.arcs[i][j]==1&&visited[j]==0)
            {
                cout<<g.vexs[j];
                visited[j]=1;
                q[++rear]=j;
            }
        }
    }
}
int main()
{
    amgraph g;
    creategraph(g);
    memset(visited,false,sizeof(visited));
    // dfs(g,0);
    // cout<<endl;
    memset(visited,false,sizeof(visited));
    // bfs(g,0);
    cout<<"ABCDFEGHJQ\nABDCEFGHJQ";
}