#include<stdio.h>
#define MAX 100
#define true 1
#define false 0

int adj[MAX][MAX];
bool visited[MAX];
int n;
int distance[MAX];
void create_graph()
{
    int i,edges,origin,destin;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
   // max_edges=n*(n-1);
   scanf("%d",&edges);

    for(i=1;i<=edges;i++)
    {
        printf("Enter edge %d( 0 0 to quit ) : ",i);
        scanf("%d %d",&origin,&destin);
         // adj[origin][destin]=1;
            adj[origin][destin]=1;

    }/*End of for*/
}
void bfs(int v)
{
    int i,front,rear;
    int que[20];
    front=rear= -1;
    printf("%d ",v);
    visited[v]=true;
    rear++;
    front++;
    que[rear]=v;

    while(front<=rear)
    {
        v=que[front];     /* delete from queue */
        front++;
        for(i=1;i<=n;i++)
        {
            /* Check for adjacent unvisited nodes */
            if( adj[v][i]==1&& visited[i]==false)
            {
                printf("%d ",i);
                visited[i]=true;
                rear++;
                que[rear]=i;
             }
        }
    }
}
int main ()
{
    int i,v,choice;
    create_graph();
       printf("Enter starting node for Breadth First Search : ");
            scanf("%d", &v);
            for(i=1;i<=n;i++)
                visited[i]=false;
            bfs(v);
            return 0;
}
