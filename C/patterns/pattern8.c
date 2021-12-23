// !/bin/bash
// SPDX-License-Identifier: GPL-3.0-or-later
// (c) TechyMinati ( Aryan Sinha ) <sinha.aryan03@gmail.com>
#include <stdio.h>
void main(){
     int n=4,i,j,k;
     for (i=1;i<=n;i++){
          for (j=1;j<=n-i;j++)
              printf(" ");
          for (k=1;k<=i;k++)
          printf("*");
          printf("\n");
          }

     }

