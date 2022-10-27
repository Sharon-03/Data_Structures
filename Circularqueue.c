#include<stdio.h>
int main()
{
 int rear=-1,front=-1,n,i=0,p=0;
 printf("Enter the limit: ");
 scanf("%d",&n);
 int cq[n];
 do
 {
 printf("\nEnter 1 for enqueue and 2 for dequeue and 3 to print and exit.");
 scanf("%d",&p);
 switch(p)
 {
  case 1: 
          if((rear == n-1&&front==0)||(front==rear+1))
          {
           printf("Circular Queue FULL");
          }
	 else 
         {
          if(rear==n-1)
           {
	    rear = 0;
	   }
	   else
	   {
	    rear=(rear+1)%n;
	    printf("\nInset the element in queue : ");
           scanf("%d",&cq[rear]);
          }
          if(front=-1)
          {
           front = 0;
          }
          printf("\n");
         for(i=front;i!=rear;i=(i+1)%n)
         {
         printf("\t %d", cq[i]);
         }
         if(i>=0)
         {
          printf("\t%d",cq[i]);
         }
         break;
  case 2:
          if(front==-1)
	   {
            printf("Circular queue is empty.");
 	   }
	  else 
	   { 
	    if(front==rear)
	    {
	    printf("\n Deleted element:  %d",cq[front-1]);
	    front=rear=-1;
	    }
	     else if(front==n-1)
	     {
	      printf("\n Deleted element:  %d",cq[front]);
	     }
	    else
	     {
	       printf("\n Deleted element:  %d",cq[front]);
	       front=(front+1)%n;
	     }
	    } 
	  printf("\n");  
	  for(i=front;i!=rear;i=(i+1)%n)
         {
         printf("\t %d", cq[i]);
         }
         if(i>=0)
         {
          printf("\t%d",cq[i]);
         }
         break;
  case 3:
         for(i=front;i!=rear;i=(i+1)%n)
         {
         printf("\t %d", cq[i]);
         }
         return 0;
         break;
 }
 }
}while(p==1||p==2);
}
