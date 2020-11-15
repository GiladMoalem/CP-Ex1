#include <stdio.h>
#include "myMath.h"

int main(){
double x;
double ans1, ans2,ans3;
printf ("plese insert a real number\n");
scanf("%lf",&x);
ans1 = add(Exp(x),Pow(x,3)); //e^x+x^3-2
ans1= sub(ans1,2); // sub ans-2
printf("The value of f(X) = e^x+x^3 -2 at the point %0.4lf is %0.4lf \n"  ,x, ans1  );
ans2= add(mul(3,x),mul(2,Pow(x,2))); // 3x+2x^2
printf("The value of f(X) = 3x+2X^2 at the point %0.4lf is: %0.4lf \n"  ,x, ans2  );
ans3 = mul(4,Pow(x,3));
ans3=  div(ans3,5);
ans3= sub(ans3,mul(2,x));// (4x^3)/5-2x
printf("The value of f(X) = (4x^3)/5-2x at the point %0.4lf  is: %0.4lf \n"  ,x, ans3  );
}