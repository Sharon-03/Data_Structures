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
for(i=0;i<n;i++)
 {
 count++;
  for(j=i+1;j<n;j++)
  {
  count++;
   if(ar[i]>ar[j])
   {
   count++;
   temp=ar[i];
   count++;
   ar[i]=ar[j];
   count++;
   ar[j]=temp;
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
 printf("Space complexity= 4n+20");A
 printf("Complexity = %d",++count);
}
