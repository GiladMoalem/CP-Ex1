#include "myMath.h"
#define exp 2.718281828

double Pow (double x, int y){
    double p=1;
    if (y>0){
    while (y>0){
        p*=x;
        y=y-1;
        }
    }
    if (y<0){ // if y is nagative
        y=y*-1;
        while (y>0){
            p=p*(1/x);
            y=y-1;
        } 
    }
    return p;
}

double Exp(int x){
    return Pow(exp,x);
}