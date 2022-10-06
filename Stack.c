#include<stdio.h>
int main()
{
 int top=-1,n,i,p;
 printf("Enter the limit: ");
 scanf("%d",&n);
 int stack[n];
 do
 {
 printf("Eneter 1 for push and 2 for pop and 3 to print and exit.");
 scanf("%d",&p);
 switch(p)
 {
  case 1:
          if(top!=n-1)
          {
            top=top+1; 
            printf("Enter the  element into the stack (PUSH): ");
            scanf("%d",&stack[top]);        
          }
          else
          {
           printf("Stack is full."); 
          }
          break;
  case 2:
          if(top==-1)
	   {
            printf("Underflow!!");
 	   }
	  else
	   {
	    printf("Popped element:  %d",stack[top]);
	    top--;
	  }
	  break;
  case 3:
         for(i=0;i<n-1;i++)
         {
         printf("\t %d", stack[i]);
         }
         return 0;
         break;
 }
}while(p==1||p==2);
}
