#include<stdio.h>
int a[10][10],k=0,top[10];
int visited[10],n,count=0;
void topology(int);
void main()
{
int i,j;
printf("no of vertices are");
scanf("%d",&n);
printf("adjacency matrix are\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\ntopology order");
for(i=0;i<n;i++)
visited[i]=0;
for(i=0;i<n;i++)
if(visited[i]==0)
topology(0);
for(i=n;i>=0;i--)
printf("%d\t",top[i]);
}
void topology(int v)
{
int w;
count=count+1;
visited[v]=count;
for(w=0;w<n;w++)
if(visited[w]==0&&a[v][w]==1)
topology(w);
printf("%d-",v);
top[k++]=v;
}
