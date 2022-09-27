#include<stdio.h>
void main()
{
 int ar[10],first=0,last,middle,flag=0,key,i,n;
 printf("Enter the array size: ");
 scanf("%d",&n);
 printf("Enter array elements in ascending order: ");
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar[i]);
 }
 printf("Enter the elment to be searched: ");
 scanf("%d",&key);
 first=0;
 last=n;
 middle=(first+last)/2;
 while(flag==0)
 {
  if(ar[middle]<key)
  {
   first=middle+1;
   middle=(first+last)/2;
  }
  else if(ar[middle]==key)
  {
   printf("Location= %d ",middle+1);
   flag=1;
  }
  else
  {
  last=middle-1;
  middle=(first+last)/2;
  }
 }
}
