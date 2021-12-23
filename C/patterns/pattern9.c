// !/bin/bash
// SPDX-License-Identifier: GPL-3.0-or-later
// (c) TechyMinati ( Aryan Sinha ) <sinha.aryan03@gmail.com>
#include <stdio.h>
int i,j,k,n=10;
void main(){
for (i=1;i<=n;i++){
    for (k=1;k<=n-i;k++)
        printf(" ");
    for (j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");

}
}


