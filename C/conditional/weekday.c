// !/bin/bash
// SPDX-License-Identifier: GPL-3.0-or-later
// (c) TechyMinati ( Aryan Sinha ) <sinha.aryan03@gmail.com>
#include <stdio.h>
void main(){
        int n;
        printf("Enter Digit to Print Day Name");
        scanf("%d",&n);
        switch(n){
                case 1:
                      printf("Day is Monday");
                      printf("First Day Of Week");
                      break;

                case 2:
                      printf("Day is Tueaday");
                      printf("Second Day Of Week");
                      break;

                case 3:
                      printf("Day is Wednesday");
                      printf("Third Day Of Week");
                      break;

                case 4:
                      printf("Day is Thursday");
                      printf("Fourth Day Of Week");
                      break;

                case 5:
                      printf("Day is Friday");
                      printf("Fifth Day Of Week");
                      break;

                case 6:
                      printf("Day is Saturday");
                      printf("Sixth Day Of Week");
                      break;

                case 7:
                      printf("Day is Sunday");
                      printf("Seventh Day Of Week");
                      break;

                default:
                      printf("Wrong Input Dude, There are only seven days in a week");
               }
}
