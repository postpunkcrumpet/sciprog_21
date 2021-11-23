#include<stdio.h>
#include<math.h>

int main(){
  
  int N=12, i; 
  float a=0.0, b_deg=60.0;

  /*Convert 60 degrees to radians*/

  float b_rad;
  b_rad=(M_PI * b_deg)/180.0;
  printf("60 degrees in radians = %f\n", b_rad);
  
 /*Calculating the area: f(x_0)+f(x_N)*/

  float area=tan(a)+tan(b_rad);
  printf("Initial sum = %f\n", area);

 /*Calculate now the formula as */

 for(i=5; i<60; i=i+5){
   area=area+2*tan((M_PI*i)/180.0);
   printf("New area at x%d = %f \n ", i/5, area);
 } 
 /*Multiply by (b-a)/2N*/

 float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
 area=mult_rad*area;

 /*Approximated result*/

 printf("\n Trapezoidal result=%f\n", area);

 /*Actual result*/

 printf("Real result=%f\n", log(2.0));


}
