#include <stdio.h>
#include "kgv.h"

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