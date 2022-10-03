#include<stdio.h>
struct poly
{
 int expo;
 int coeff;
};
void main()
{
 int n,i;
 printf("Enter the no. of coefficients: ");
 scanf("%d",&n);
 struct poly a[n];
 for(i=0;i<n;i++)
 {
  printf("Enter the coefficient of %d element: ",i+1);
  scanf("%d",&a[i].coeff);
  printf("Enter the corresponding exponent: ");
  scanf("%d",&a[i].expo);
 }
 for(i=0;i<n;i++)
 {
 if(i!=n-1)
 printf("%dx^%d +",a[i].coeff,a[i].expo);
 else
 printf("%dx^%d ",a[i].coeff,a[i].expo);
 }
}
