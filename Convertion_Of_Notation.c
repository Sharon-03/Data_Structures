#include<stdio.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(char x)
{
 stack[++top] = x;
}
char pop()
{ 
if(top==-1)
{
 return -1;
}
else
{
return(stack[top--]);
}
} 
int priority(char x)
{
 if(x=='(')
 {
 return 0;
 }if(x=='+'||x=='-')
 {
 return 1;
 }
 if(x=='*'||x=='/')
 {
 return 2;
 }
 if(x=='^')
 {
 return 3;
 }
 return 0;
}
void main()
{
char infix[20];
char *p,x;
printf("Enter the infix expression: ");
scanf("%s",infix);
p=infix;
printf("\nPOstfix Expression is: ");
while(*p!='\0'){
 if(isalnum(*p))
 {
 printf("%c",*p);
 }else if(*p=='('){
 push(*p);
 }else if(*p==')')
 {
 while((x=pop())!='(')
 {
 printf("%c",x);
 }
 }
 else
 {
 while(priority(stack[top])>=priority(*p))
 {
 printf("%c",pop()); 
 break; 
 }
 push(*p); 
 }
 p++;
}
while(top!=-1)
{
 printf("%c",pop());
}
}
