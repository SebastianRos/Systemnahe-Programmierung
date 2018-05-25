#include <stdio.h>
#include <math.h>

extern double f(double x);
extern double fSurface(double start, double end);
extern double fIntegral(double start, double end);
extern double g(double x);
extern double gSurface(double start, double end);
extern double gIntegral(double start, double end);
extern double modulus(double value);

int main(){
    double result = gIntegral(-1000,1000);
    printf("%f", result);
    return 1;
}

double f(double x){
    return (x*x*x) - 2*(x*x) - x + 2;
}
double fSurface(double start, double end){
    double h = f((start + end)/2);
    return h * modulus(start - end);
}
double fIntegral(double start, double end){
    double integral = 0;
    for(double i=start; i<end; i+=0.001){
        integral += fSurface(i-0.0005, i+0.0005);
    }
    return integral;
}

double g(double x){
    if (x == 0){
        return 1;
    } else{
        return sin(x) / x;
    }
}
double gSurface(double start, double end){
    double h = g((start + end)/2);
    return h * modulus(start - end);
}
double gIntegral(double start, double end){
    double integral = 0;
    for (double i=start; i<end; i+=0.01){
        integral += gSurface(i-0.005, i+0.005);
    }
    return integral;
}
double modulus(double value){
    if (value < 0){
        return value * -1;
    }
    return value;
}