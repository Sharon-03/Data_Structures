#include<stdio.h>
void main()
{
int i,key,n;
printf("Enter the size of array: ");
scanf("%d",&n);
int ar[n];
printf("Enter the array elements: ");
 for(i=0;i<n;i++)
  {
  scanf("%d",&ar[i]);
  }
 printf("Enter the element to be searched: ");
 scanf("%d",&key);
  for(i=0;i<n;i++)
  {
   if(ar[i]==key)
   {
   printf("Elemnt found at position: %d",i+1);
   break;
   }
  }
  if(i==n)
  {
  printf("Element not found.");
  }
}
