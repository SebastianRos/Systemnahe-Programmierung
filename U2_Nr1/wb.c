#include <stdio.h>

int main(){
    printf("Datentyp: Wortbreite\n");
    printf("char: %i\n", sizeof(char));
    printf("int: %i\n", sizeof(int));
    printf("short int: %i\n", sizeof(short int));
    printf("long int: %i\n", sizeof(long int));
    printf("float: %i\n", sizeof(float));
    printf("double: %i\n", sizeof(double));
    printf("long double: %i\n", sizeof(long double));

    printf("----------------------------");

    int a = 125;
    int b = -39;
    printf("Format: Zahl a | Zahl b\n");
    printf("Zeichen: %c | %c\n", a, b);
    printf("vorzeichenlose Ganzzahl: %u | %u\n", a, b);
    printf("Hexadezimalzahl: %x | %x\n", a, b);
    printf("vorzeichenbehaftete Ganzzhahl: %i | %i\n", a, b);
    printf("Gleitkommazahl mit einfacher Genauigkeit und 2 Nachkommastellen: %.2f | %.2f\n", a, b);
    printf("Gleitkommazahl mit doppelter Genauigkeit und in expontentieller Darstellung: %E | %E\n", a, b);
}