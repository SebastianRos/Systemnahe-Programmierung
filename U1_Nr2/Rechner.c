#include <stdio.h>

extern double summe(double s1, double s2);
extern double differenz(double sub, double min);
extern double produkt(double f1, double f2);
extern double quotient(double divid, double divis);
extern int runde(float a);
extern double min(double a, double b, double c);
extern double max(double a, double b, double c);
extern int ggT(int a, int b);
extern int istPrim(int a);
extern int betrag(int a);
extern void primzahlZwillinge();

int main(){
    primzahlZwillinge();
    return 0;

}

double summe(double s1, double s2){
    return (s1 + s2);
}
double differenz(double sub, double min){
    return (sub - min);
}
double produkt(double f1, double f2){
    return (f1 * f2);
}
double quotient(double divid, double divis){
    if (divis != 0){
        return (divid / divis);
    } else{
        printf("Es wurde versucht durch 0 zu teilen.\n");
        return 0;
    }
}

int runde(float a){
    if (a < 0){
        return a - 0.5;
    } else{
        return a + 0.5;
    }
}
int betrag(int a){
    if (a < 0){
        return  a + (a * 2);
    } else{
        return a;
    }
}

double min(double a, double b, double c){
    double smallest = a;
    if (smallest > b){
        smallest = b;
    }
    if (smallest > c){
        smallest = c;
    }
    return smallest;
}
double max(double a, double b, double c){
    double greatest = a;
    if (greatest < b){
        greatest = b;
    }
    if (greatest < c){
        greatest = c;
    }
    return greatest;
}

int ggT(int a, int b){
    while (b != 0){
        if (a > b){
            a = a - b;
        } else{
            b = b - a;
        }
    }
    return a;
}

int istPrim(int a){
    for (int i = 2; i < a; i++){
        if (ggT(a, i) != 1){
            return 0;
        }
    }
    return 1;
}
void primzahlZwillinge(){

    for (int p1 = 3; p1 <= 500; p1++){
        if (istPrim(p1) == 1){
            for (int p2 = 3; p2 <= 500; p2++){
                 if (istPrim(p2) == 1 && betrag(p1 - p2) == 2){
                     printf("%d,%d\n", p1, p2);
                 }
            }
        }
    }
}