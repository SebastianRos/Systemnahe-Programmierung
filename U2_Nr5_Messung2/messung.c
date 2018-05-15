#include <stdio.h>
#include <time.h>

typedef struct Messung{
    short int spannung;
    float stromstaerke;
    unsigned short int druck;
    struct tm zeit;
} Messung;
extern void ausgabe(Messung m);

int main(){
    Messung m;
    scanf("%d", &m.spannung);
    scanf("%f", &m.stromstaerke);
    scanf("%d", &m.druck);
    time_t t;
    time(&t);
    m.zeit = *localtime(&t);
    ausgabe(m);
}

void ausgabe(Messung m){
    printf("----- Messung vom %d.%d.%d %d:%d Uhr -----\n",
        m.zeit.tm_mday, m.zeit.tm_mon, m.zeit.tm_year + 1900, m.zeit.tm_hour, m.zeit.tm_min);
    printf("Spannung: %d Volt\n", m.spannung);
    printf("Stromstaerke: %f Ampere\n", m.stromstaerke);
    printf("Druck: %d Bar\n", m.druck);
    printf("---------- Ende der Messung ----------\n");
}