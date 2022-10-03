#include<stdio.h>
void main()
{
 int a[10][10],b[20][3],r,c,k=1;
 printf("Enter the order of matrix: ");
 scanf("%d%d",&r,&c);
int i,j;
printf("Enter the elements: ");
for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
  {
  scanf("%d",&a[i][j]);
  }
 }
 b[0][0]=r;
 b[0][1]=c;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(a[i][j]!=0)
   {
   b[k][0]=i;
   b[k][1]=j;
   b[k][2]=a[i][j];
   k++;
   }
  }
 }
 b[0][2]=k-1;
 printf("Sparse Matrix\n");
 printf("Row Column Value");
 for(i=0;i<k;i++)
 {
   printf("\n");
   printf("%d\t %d\t %d\t",b[i][0],b[i][1],b[i][2]);    
 }
}
