#include <stdio.h>/*Defining packages*/

int main(void) {
/* Declare variables */
   int i; /*integer*/
   float sum1, sum2, diff;/*floats*/
   

/* First sum */
   sum1 = 0.0;/*initialise variable*/
   for (i=1; i<=1000; i++) {/*for loop*/
      sum1 += 1.0/i; /*sum1=sum1+1.0/i*/
      /*  Insert here */
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) { 
  sum2=sum2+1.0/i;
   /* Insert the same line as above except use sum2 */
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum2 - sum1;

   printf(" Difference between the two is %f\n",diff);

} 
