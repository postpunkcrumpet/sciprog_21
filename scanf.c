#include<stdio.h>

int main(){
	
   int i;
   double a;
   printf("Enter an integer and a double separately by (,)\n");
   scanf("%d, %lf", &i, &a);
   printf("You have entered %d, and %lf\n", i, a);
   


   int *pointer_to_i = &i;
   printf("The value of i is %d\n ", i);
   printf("The value of i is also %d\n ", *pointer_to_i);
   printf("The address of i is %d\n", &i);
   return 0;
}
