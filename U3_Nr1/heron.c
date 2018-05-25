#include <stdio.h>
#include <math.h>

extern double hsqrt(double a);
extern double rhsqrt(double a, int tiefe);

int main(){
    int a = 2;
    printf("%f | ", hsqrt(a));
    printf("%f", sqrt(a));
}

double hsqrt(double a){
    return rhsqrt(a, 3);
}
double rhsqrt(double a, int tiefe){
    if (tiefe <= 0){
        return a;
    }
    double tmp = rhsqrt(a, tiefe-1);
    return 0.5 * (tmp + (a/tmp));
}