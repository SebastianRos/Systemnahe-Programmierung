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