#include<stdio.h>
void main()
{
int i,j,n,temp,count=0;
count++;
printf("Enter the size of the array: ");
count++;
scanf("%d",&n);
count++;
int ar[n];
count++;
printf("Enter the elements of the array: ");
count++;
for(i=0;i<n;i++)
 {
 count++;
 scanf("%d",&ar[i]);
 count++;
 }
 count++;
for(i=0;i<n-1;i++)
 {
 count++;
  for(j=0;j<n-i-1;j++)
  {
  count++;
   if(ar[j]>ar[j+1])
   {
   count++;
   temp=ar[j];
   count++;
   ar[j]=ar[j+1];
   count++;
   ar[j+1]=temp;
   count++;
   }
   count++;
  }
  count++;
 }
 count++;
 printf("Sorted array is: ");
 count++;
 for(i=0;i<n;i++)
 {
 count++;
  printf(" %d ",ar[i]);
 count++;
 }
 count++;
 printf("Time complexity = %d",++count);
 printf("Space complexity= 4n+20");
}
