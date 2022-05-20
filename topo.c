#include<stdio.h>
#include<stdlib.h>
int k=0;
int top[10];
int n,a[10][10];
int visited[10],count=0;
void dfs(int v);
void main()
{
int i,j;
printf("Enter the no of vertices");
scanf("%d",&n);
printf("Enter the Adjacency matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]); 
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("DFS ");
for(i=0;i<n;i++)
visited[i]=0;
for(i=0;i<n;i++)
if(visited[i]==0)
dfs(i);
printf("Topology sorting");
for(i=n;i>=0;i--)
printf("%d\t",top[i]);
}
void dfs(int v)
{
int w;
count=count+1;
visited[v]=count;
for(w=0;w<n;w++)
if(visited[w]==0 && a[v][w]==1)
dfs(w);
printf("%d\t",v);
top[k++]=v;
}
