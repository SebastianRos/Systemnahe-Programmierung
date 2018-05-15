#include <stdio.h>

extern double hsqrt(double a);
extern double hsqrt(double a, int tiefe);

int main(){
    double r = hsqrt(4);;
    printf("%d", )
}

double hsqrt(double a){
    return hsqrt(a, 3);
}
double hsqrt(double a, int tiefe){
    if (tiefe <= 0){
        return a;
    }
    double tmp = hsqrt(a, tiefe-1);
    return 0.5 * (tmp + (a/tmp));
}