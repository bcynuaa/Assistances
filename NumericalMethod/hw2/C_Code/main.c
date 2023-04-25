#include <stdio.h>
#include "root.c"

double function0(double x){
    return x*x*x - x*x - 1;
}

double function1(double x){
    return 3*x*x - 2*x;
}

int main(){
    printf("x^3-x^2-1=0 's root in (0, 1) is:\n");
    double a = 1.;
    double b = 2.;
    printf("binary search method:  %f\n", binSearch(a, b, function0));
    printf("classic Newton iteration:  %f\n", newtonClassicalIteration(b, function0, function1));
    printf("Newton secant method:  %f\n", newtonSecantIteration(b, function0));
    return 0;
}