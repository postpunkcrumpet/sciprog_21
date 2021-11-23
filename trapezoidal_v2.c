#include<stdio.h>
#include<math.h>

float degtorad(float degang);

int main(){

/*Definining conversion function*/

 int N=12, i;

 float TanArr[N+1], deg, rad;
  
/*Calcululate the values of f(x_i) where i=0,1,...,12 as array elements
 *x_i are in radians */
  for(i=0; i<=N; i++){
    deg=i*5.0;
    rad=degtorad(deg);
    TanArr[i]=tan(rad);
    printf("TanArr[%d]=%f (f(x) at = %d)\n", i, TanArr[i], i);
}

/*Finding the area of the trapezoidal rule.*/
  float area;
  area=TanArr[0]+TanArr[N];
  for(i=1; i<N; i++){
    area=area+2.0*TanArr[i];
}

  float mult_rad=degtorad((60.0-0.0)/(2.0*N));
  area=mult_rad*area;

  printf("\nTrapezoidal result: %f\n", area);

  printf("Actual result: %f\n", log(2));

return 0;

}

float degtorad(float degang){
  return(M_PI*degang/180.0);
}
