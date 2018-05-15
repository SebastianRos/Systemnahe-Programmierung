#include <stdio.h>

typedef struct Bruch{
    int zaehler;
    int nenner;
} Rational;
extern int kgv(int z1, int z2);
extern int ggt(int z1, int z2);
extern Rational kuerze(Rational r);
extern Rational addiere(Rational a, Rational b);
extern Rational subtrahiere(Rational a, Rational b);
extern Rational multipliziere(Rational a, Rational b);
extern Rational dividiere(Rational a, Rational b);
extern float toFloat(Rational r);
extern void ausgabe(Rational r);
extern Rational erweitern(Rational r, int faktor);

int main(){
    int z1;
    int n1;
    int z2;
    int n2;
    scanf("%i%i%i%i",&z1, &n1, &z2, &n2);
    Rational r1 = {z1, n1};
    Rational r2 = {z2, n2};
    Rational r = addiere(r1, r2);
    ausgabe(r);
}

Rational kuerze(Rational r){
    int teiler = ggt(r.nenner, r.zaehler);
    Rational result = {r.zaehler / teiler, r.nenner / teiler};
    return result;
}
Rational addiere(Rational a, Rational b){
    int tmp = a.nenner;
    a = erweitern(a, b.nenner);
    b = erweitern(b, tmp);
    Rational result = {a.zaehler + b.zaehler, a.nenner};
    return kuerze(result);
}
Rational subtrahiere(Rational a, Rational b){
    int tmp = a.nenner;
    a = erweitern(a, b.nenner);
    b = erweitern(b, tmp);
    Rational result = {a.zaehler - b.zaehler, a.nenner};
    return kuerze(result);
}
Rational multipliziere(Rational a, Rational b){
    Rational result = {a.zaehler * b.zaehler, a.nenner * b.nenner};
    return kuerze(result);
}
Rational dividiere(Rational a, Rational b){
    Rational result = {a.zaehler * b.nenner, a.nenner * b.zaehler};
    return kuerze(result);
}
float toFloat(Rational r){
    float a = r.zaehler;
    float b = r.nenner;
    return (a / b);
}
void ausgabe(Rational r){
    printf("%i\n-\n%i\n", r.zaehler, r.nenner);
}

int kgv(int z1, int z2){
    return (z1 * z2) / ggt(z1, z2);
}
int ggt(int z1, int z2){
    while(z2 != 0){
        int h = z1 % z2;
        z1 = z2;
        z2 = h;
    }
    return z1;
}
Rational erweitern(Rational r, int faktor){
    Rational result = {r.zaehler * faktor, r.nenner * faktor};
    return result;
}