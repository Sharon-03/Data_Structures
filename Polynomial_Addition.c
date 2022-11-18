#include <stdio.h>
#include <stdlib.h>
struct node {
 int coefficient;
 int exponent;
 struct node *ptr;
};
struct node *poly1;
struct node *poly2;
void readpoly(struct node **, int);
void display(struct node *);
void additionPoly();
int main() 
{
 int n1, n2;
 printf("First polynomial details\n");
 printf("Enter the number of terms : ");
 scanf("%d", &n1);
 readpoly(&poly1, n1);
 display(poly1);
 printf("\nSecond polynomial details\n");
 printf("Enter the number of terms : ");
 scanf("%d", &n2);
 readpoly(&poly2, n2);
 display(poly2);
 printf("\n\nAddition of given polynomials : \n");
 additionPoly();
 return 0;
}
void readpoly(struct node **poly, int noOfTerms)
 {
int coeff, exp, cont;
struct node *temp;
temp = (struct node *)malloc(sizeof(struct node *));
*poly = temp;
for(int i=0; i<noOfTerms; i++)
{
printf("Exponent : ");
scanf("%d", &exp);
printf("Coeffecient of (x^%d) : ", exp);
scanf("%d", &coeff);
temp->coefficient = coeff;
temp->exponent = exp;
temp-> ptr = NULL;
if(i != noOfTerms-1)
{
 temp->ptr = (struct node *)malloc(sizeof(struct node *));
 temp = temp->ptr;
 temp->ptr = NULL;
 }
 }
}
void display(struct node *poly) 
{
printf("\nYour polynomial expression is : \n");
while(poly != NULL){
printf("%d (x^%d)", poly->coefficient, poly->exponent);
poly = poly->ptr;
if(poly != NULL)
{
printf(" + ");
 }
 }
}
void additionPoly() 
{
int sum;
while(poly1!=NULL && poly2!=NULL)
{
if(poly1->exponent == poly2->exponent) 
{
printf("%d (x^%d)", poly1->coefficient+poly2->coefficient, poly1->exponent);
poly1 = poly1->ptr;
poly2 = poly2->ptr;
if(poly1!=NULL || poly2!=NULL)
 {
 printf(" + ");
 }
}
else if(poly1->exponent > poly2->exponent) 
{
printf("%d (x^%d)", poly1->coefficient, poly1->exponent);
poly1 = poly1->ptr;
if(poly1!=NULL || poly2!=NULL)
 {
 printf(" + ");
 }
}
else
{
printf("%d (x^%d)", poly2->coefficient, poly2->exponent);
poly2 = poly2->ptr;
if(poly1!=NULL || poly2!=NULL)
 {
 printf(" + ");
 }
 }
}
 while(poly1 != NULL)
{
printf("%d (x^%d)", poly1->coefficient, poly1->exponent);
poly1 = poly1->ptr;
if(poly1!=NULL || poly2!=NULL)
{
printf(" + ");
}
}
while(poly2 != NULL) 
{
printf("%d (x^%d)", poly2->coefficient, poly2->exponent);
poly2 = poly2->ptr;
if(poly1!=NULL || poly2!=NULL)
{
printf(" + ");
}
}
}
