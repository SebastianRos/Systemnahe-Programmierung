#include <stdio.h>

extern float quadrat(float x);
extern int modulo3(float x);
extern double wurzel(float x);
extern double fkt1(float x);
extern double linksShift2(float x);
extern double undMit0x00F0(float x);
extern int inkrement(float x);

int main(){
    float x;
    scanf("%f", &x);
    return 0;
}

float quadrat(float x){
    return x * x;
}
int modulo3(float x){
    int a = x;
    return a % 3;
}
double wurzel(float x){
    return sqrt(x);
}
double fkt1(float x){
    return (5*x + 3) / (7*(x-1.5));
}
double linksShift2(float x){
    return b << 2;
}
double undMit0x00F0(float x){
    return b & 0x00F0;
}
int inkrement(float x){
    return x++;
}