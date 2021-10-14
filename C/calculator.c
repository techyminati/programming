// !/bin/bash
// SPDX-License-Identifier: GPL-3.0-or-later
// (c) TechyMinati ( Aryan Sinha ) <sinha.aryan03@gmail.com>
// Simple Calculator in C

#include<stdio.h>
#include<math.h>
int main()
{
  float n1,n2;              // Lets Declare two variables here
  char operator;            // This is will store our operator
  printf("Enter an operator(+,-,/,*,^):");   // Take Operator Input from user 
  scanf("%c",&operator);    

  printf("Enter two numbers:");  // Take two numbers as input from User
  scanf("%f%f",&n1,&n2);    
  
  switch(operator)          // this code identifies which operator to use for operation, & displays output !
  {
      
    case'+' : printf("%.3f + %.3f = %.3f",n1,n2,(n1+n2)); 
              break;
    case'-' : printf("%.3f - %.3f = %.3f",n1,n2,(n1-n2));
              break;
    case'/' : printf("%.3f / %.3f = %.3f",n1,n2,(n1/n2));
              break;
    case'*' : printf("%.3f * %.3f = %.3f",n1,n2,(n1*n2));
              break;
    case'^' : printf("%.3f ^ %.3f = %.3f",n1,n2,pow(n1, n2));
              break;
    default: printf("Error! The given operator is wrong");

  }
  return 0;
}
