#include<stdio.h>
{
  int a, b;
  char op;
  
  printf("\nEnter the operator:");
  scanf("%c",&op);
  printf("\nEnter values of a and b:");
  scanf("%d%d", &a, &b);
  
  if(op=='+')
   printf("\nSum = %d", a+b);
   
  elseif(op=='-')
   printf("\nDifference = %d", a-b) ;
   
   
 