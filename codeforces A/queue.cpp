#include <stdio.h>
#define SIZE 5

 void enqueue(int);
 void dequeue();
 void display();

 int items[SIZE],front=-1,rear=-1;
 int main ()
 {
     int n,var;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         scanf("%d",&var);
         enqueue(var);
     }
      display();
     dequeue();
     //
   /*  enqueue(1);
     enqueue(2);
     enqueue(3);
     enqueue(4);
     enqueue(5);
     enqueue(6);
     display();
     dequeue();
      display();*/
      dequeue();
      display();
      return 0;
 }
 void enqueue(int value)
 {
     if(rear==SIZE-1)
     {
         printf("\nqueue is full!");
     }
     else
        {
            if(front==-1)
            {
                front=0;
            }
            rear++;
            items[rear]=value;
            printf("\nInserted -> %d",value);
        }
 }
 void dequeue()
 {
     if(front==-1)
     {
         printf("queue is empty");
     }
     else
        {
            printf("dequed %d",items[front]);
            front++;
            if(front>rear)
            {
                front=rear=-1;
            }
        }
 }
 void display(){
    if(rear==-1)
        {
            printf("queue is empty");
        }
        else{
            int i;
            printf("\nqueue elements are:\n");
            for(i=front;i<=rear;i++)
            {
                 printf("%d\t",items[i]);
            }
        }
    }
