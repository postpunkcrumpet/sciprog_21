/*
 *Iterative and Recursive version of Euclid's Algorithm 
 *to calculate the GCD of two positive integers.
 *
 */
#include <stdio.h>

//Declare functions
int iterativeGCD(int a, int b);

int recursiveGCD(int a, int b){
   if(b==0){
      return a;
   }
   else{
      return(recursiveGCD(b, a%b));
   }

}

int main(void) {
   int a, b, error;

   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b);
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }

   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }


  //Call functions
  printf("Iterative GCD(%d, %d)=%d\n", a, b, iterativeGCD(a,b));
  printf("Recursive GCD(%d, %d)=%d\n", a, b, recursiveGCD(a,b));
  return 0;
}

//Define functions
int iterativeGCD(int a, int b){
   int temp;
   while(b!=0){
      temp=b;
      b=a%b;
      a=temp;
   }
   return a;
   
}

 
