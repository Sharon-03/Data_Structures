#include<stdio.h>
int main()
{
 int rear=-1,front=-1,n,i,p;
 printf("Enter the limit: ");
 scanf("%d",&n);
 int queue[n];
 do
 {
 printf("\nEnter 1 for enqueue and 2 for dequeue and 3 to print and exit.");
 scanf("%d",&p);
 switch(p)
 {
  case 1: 
          if(rear == n-1)
          {
           printf("Queue Overflow n");
          }
	 else
         {
          if(front==-1)
	   front = 0;
	   rear = rear + 1;
	   printf("\nInset the element in queue : ");
           scanf("%d",&queue[rear]);
         }
         for(i=front;i<=rear;i++)
         {
         printf("\t %d", queue[i]);
         }
         break;
  case 2:
          if(front==-1||front>rear)
	   {
            printf("Underflow!!");
 	   }
	  else
	   {
	    printf("\n Deleted element:  %d",queue[front+1]);
	    front=front+1;
	   }
	  for(i=front+1;i<=rear;i++)
         {
         printf("\t %d", queue[i]);
         }
         break;
  case 3:
         for(i=front;i<=rear;i++)
         {
         printf("\t %d", queue[i]);
         }
         return 0;
         break;
 }
}while(p==1||p==2);
}
