#include <stdio.h>
#include <math.h>/*Using the math package. Remember to type -lm upon execution.*/

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits; /*Note the data types.*/
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 42; /*The meaning of life*/
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;/*'while' loop. Don't worry about this yet.*/
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
   numdigits = ceil(logf(fnum)/logf(2) );/*'ceil' function outputs least integer greater than or equal to x. V useful in computer science. */
   printf("The number of digits is %d\n",numdigits);



   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

