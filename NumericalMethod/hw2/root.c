#include <stdio.h>

const double DEFAULT_ERROR = 1e-10;
const int MAX_ITERATION = 1000;
const double SMALL_AMOUNT = 1e-5;

double myabs(double x){
    if(x < 0) return -x;
    else return x;
}

int iterationStepToConsole(int i){
    printf("\niteration step is:  %d\n", i);
    return 0;
}

double binSearch(double a, double b, double (*f)(double)){
    int i;
    double mid;
    for(i=0; i<MAX_ITERATION; i++){
        mid = (b+a) / 2;
        if( myabs( b-a ) < DEFAULT_ERROR ) break;
        else{
            if( f(a)*f(mid) < 0. ) b = mid;
            else a = mid;
        }
    }
    iterationStepToConsole(i);
    return mid;
}

double newtonClassicalIteration(double x0, double (*f0)(double), double (*f1)(double)){
    int i;
    double x_cur;
    double x_next;
    x_cur = x0;
    if(f1(x_cur) == 0.) x_next = x_cur - f0(x_cur) / (f1(x_cur) + SMALL_AMOUNT);
    else x_next = x0 - f0(x_cur) / f1(x_cur);
    for(i=0; i<MAX_ITERATION; i++){
        if( myabs(x_next - x_cur) < DEFAULT_ERROR ) break;
        else{
            if(f1(x_next) == 0.){
                x_cur = x_next;
                x_next = x_cur - f0(x_cur) / (f1(x_cur) + SMALL_AMOUNT);
            }
            else{
                x_cur = x_next;
                x_next = x_cur - f0(x_cur) / f1(x_cur);
            }
        }
    }
    iterationStepToConsole(i);
    return x_next;
}

double newtonSecantIteration(double x0, double (*f)(double)){
    int i;
    double x_cur = x0;
    double x_next = x0 + 10*SMALL_AMOUNT;
    double x_tmp;
    for(i=0; i<MAX_ITERATION; i++){
        if( myabs(x_next - x_cur) < DEFAULT_ERROR ) break;
        else{
            if( f(x_cur) - f(x_next) == 0. ){
                x_tmp = x_next;
                x_next = x_next - f(x_next) / (f(x_next) - f(x_cur) + SMALL_AMOUNT) * (x_next - x_cur);
                x_cur = x_tmp;
            }
            else{
                x_tmp = x_next;
                x_next = x_next - f(x_next) / (f(x_next) - f(x_cur)) * (x_next - x_cur);
                x_cur = x_tmp;
            }
        }
    }
    iterationStepToConsole(i);
    return x_next;
}